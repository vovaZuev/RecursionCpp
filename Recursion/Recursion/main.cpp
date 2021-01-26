#include <iostream>
using namespace std;

int Power(int n, int p)
{
	if (p == 0) return 1;
	return n * Power(n, p - 1);
}

int main()
{
	setlocale(LC_ALL, "");
	int n, p;
	cout << "¬ведите число и степень: "; cin >> n >> p;
	cout << Power(n, p) << endl;
}