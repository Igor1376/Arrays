#include<iostream>
using namespace std;

#ifdef FUNK
int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите значение с клавиатуры: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quote(a, b) << endl;

}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	// Product - Произведение
	return a * b;
}
double Quote(int a, int b)
{
	//Quotient - частное
	return (double)a / b;
}
#endif // FUNK

int Fakt(int n, int f);

void main()
{
	setlocale(LC_ALL, "");
	int n, f = 1;
	cout << "Введите значение факториала: "; cin >> n;
	for (int i = 2; i <= n; i++)
	{
		f *= i;

	}
	cout << Fakt(n, f) << endl;
}
int Fakt(int n, int f)
{
	return f;
}

#ifdef FUNK2
int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите значение с клавиатуры: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Prod(a, b) << endl;
}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quote(int a, int b)
{
	return (double)a / b;
}
#endif // FUNK2

