#include <iostream>
using namespace std;

#define delimiter "\n===========================================\n";

int Power(int n, int p)
{
	if (p == 0) return 1;
	return n * Power(n, p - 1);
}

int fib_num(int n)
{
	if (n <= 1) return n;
	return fib_num(n - 1) + fib_num(n - 2);
}

void Fib1(int lim)
{
	int i = 0;
	while (fib_num(i) <= lim)
	{
		cout << fib_num(i) << " ";
		i++;
	}
}

void Fib2(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << fib_num(i) << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	int n, p;
	int num, lim;
	cout << "¬ведите число и степень: "; cin >> n >> p;
	cout << Power(n, p) << endl;
	cout << delimiter;
	cout << "¬ведите предел дл€ чисел ‘ибоначчи: "; cin >> lim;
	Fib1(lim);
	cout << delimiter;
	cout << "¬ведите пор€дковый номер числа ‘ибоначчи: "; cin >> num;
	Fib2(num);
}