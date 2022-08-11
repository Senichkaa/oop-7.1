#include <iostream> 
#include <algorithm> 
#include <vector> 
#include <list>

using namespace std;

bool myfn(int i, int j) { return (i < j); }

int RandomNumber() { return (std::rand() % 100); }

void print(vector<int> a)
{
	for (int i : a)
		cout << i << " ";
	cout << endl;
}

int main()
{
	srand(unsigned(time(0)));

	int n;
	cout << "n = "; cin >> n;
	vector<int> a(n);

	generate(a.begin(), a.end(), RandomNumber);
	print(a);

	vector<int>::iterator it = a.begin();

	vector<int> b(a.size());
	auto p = copy_if(a.begin(), a.end(), b.begin(), [](int i) {return i % 2 == 0; });

	b.resize(p - b.begin());
	print(b);

	auto min = *std::min_element(b.begin(), b.end(), myfn);

	cout << "Min:" << min << endl;

	replace(a.begin(), a.end(), min, *it);
	replace(a.begin(), a.end(), *it, min);

	print(a);
}