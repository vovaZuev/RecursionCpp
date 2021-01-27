#include <iostream>
using namespace std;

#define delimiter "\n===========================================\n";


double Power(double n, int p);

int fib_num(int n);

void Fibon(int n, double a = 0, double b = 1);

int main()
{
	setlocale(LC_ALL, "");
	double n;
	int p;
	int num;
	cout << "¬ведите число и степень: "; cin >> n >> p;
	cout << Power(n, p) << endl;
	cout << delimiter;
	/*cout << "¬ведите предел дл€ чисел ‘ибоначчи: "; cin >> lim;
	Fib1(lim);
	cout << delimiter;*/
	cout << "¬ведите пор€дковый номер числа ‘ибоначчи: "; cin >> num;
	Fibon(num);
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


void Fibon(int n, double a, double b)
{
	if (n == 0) return;
	cout << a << "\n";
	Fibon(n - 1, b, a + b);
}