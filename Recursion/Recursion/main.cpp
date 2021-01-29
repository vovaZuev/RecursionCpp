#include <iostream>
using namespace std;

#define delimiter "\n===========================================\n";


double Power(double n, int p);

int fib_num(int n);

void FibNum(int n, double a = 0, double b = 1);

void FibMaxValue(int max, double a = 0, double b = 1);

int main()
{
	setlocale(LC_ALL, "");
	double n;
	int p;
	int lim, num;
	cout << "¬ведите число и степень: "; cin >> n >> p;
	cout << Power(n, p) << endl;
	cout << delimiter;
	cout << "¬ведите предел дл€ чисел ‘ибоначчи: "; cin >> lim;
	FibMaxValue(lim);
	cout << delimiter;
	cout << "¬ведите пор€дковый номер числа ‘ибоначчи: "; cin >> num;
	FibNum(num);
}
double Power(double n, int p)
{
	if (p == 0) return 1;
	//return p == 0 ? 1 : p > 0 ? n * Power(n, p - 1) : 1 / n * Power(n, p + 1);
	if (p > 0) return n * Power(n, p - 1);
	else return 1 / n * Power(n, p + 1);
}

int fib_num(int n)
{
	if (n <= 1) return n;
	return fib_num(n - 1) + fib_num(n - 2);
}


void FibNum(int n, double a, double b)
{
	if (n == 0) return;
	cout << a << "\n";
	FibNum(n - 1, b, a + b);
}

void FibMaxValue(int max, double a, double b)
{
	if (a > max) return;
	cout << a << "\n";
	FibMaxValue(max, b, a + b);
}