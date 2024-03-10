#include<iostream>
using namespace std;
int sum(int a, int b);
int diff(int a, int b);
int prod(int a, int b);
double quote(int a, int b);
double fac(int a);
double pow(double a, int b);
void main()
{
	system("CLS");
#ifdef man
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Enter two numbers: "; cin >> a >> b;
	int c = sum(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << diff(a, b) << endl;
	cout << a << "*" << b << "=" << prod(a, b) << endl;
	cout << a << "/" << b << "=" << quote(a, b);
#endif
	int a,b;
	cout << "Enter the number: "; cin >> a;
	cout << "And the power: "; cin >> b;
	cout << fac(a) << endl;
	cout << pow(a, b) << endl;;
	system("PAUSE");
	main();
}
 double pow(double a, int b)
{
	 double N = 1;
	 if (b < 0)
	 {
		 a = 1 / a;
		 b = -b;
	 }
	 for (int i = 0; i < b; i++)
	 {
		 N *= a;
	 }
	 return N;
}
double fac(int a)
{
	for (int i = a-1; i > 0; i--)a *=i;
	return a;
}
int sum(int a, int b)
{
	int c = a + b;
	return c;
}
int diff(int a, int b)
{
	return a - b;
}
int prod(int a, int b)
{
	return a * b;
}
double quote( int a, int b)
{
	return (double)a / b;
}