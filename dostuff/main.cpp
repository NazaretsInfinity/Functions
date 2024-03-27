#include<iostream>
using namespace std;
#define tab "\t"
void fillrand(int arr[], int const n, int minrand=0, int maxrand=100);
void fillrand(double arr[], int const n, int minrand=0, int maxrand=1000); // double
void fillrand(char arr[], int const n, int minrand=0, int maxrand=100); // char
void print(const int arr[], const int n);
void print(const double arr[], const int n);// double
void print(const char arr[], const int n); // char
int sum(const int arr[], const int n);
double sum(const double arr[], const int n); // double
int sum(const char arr[], const int n); // char
double avg(const int arr[], const int n);
double avg(const double arr[], const int n); // double
double avg(const char arr[], const int n); // char
void shiftleft(int arr[],const int n, int c);
void shiftleft(double arr[],const int n, int c); // double
void shiftleft(char arr[],const int n, int c); // char
void shiftright(int arr[],const int n, int c);
void shiftright(double arr[],const int n, int c); // double
void shiftright(char arr[],const int n, int c); // char
void main()
{
	const int n = 7;
	//double arr[n];
	double arr[n];
	/*int minrand, maxrand;
	cin >> minrand >> maxrand;*/
	fillrand(arr,n);
	print(arr, n);
	cout << "sum of the list - " << sum(arr, n) << endl;
	cout << "Average is - " << avg(arr, n) << endl;
	int c;
	cout << "Size of shift: "; cin >> c;
	shiftleft(arr, n, c);
	shiftright(arr, n, c);
}
// int 
void fillrand(int arr[], int const n, int minrand, int maxrand)
{
	if (maxrand < minrand)
	{
		int buffer = minrand;
		minrand = maxrand;
		maxrand = buffer;
	}
	for (int i = 0; i < n; i++)arr[i] = minrand + rand() % (maxrand - minrand);
}
void print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
int sum(const int arr[], const int n)
{
	int sum=0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
double avg(const int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
void shiftleft(int arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int l = 0; l < n-1; l++)
		{
			arr[l] = arr[l + 1];
		}
		arr[n - 1] = buffer;
	}
	print(arr, n);
}
void shiftright(int arr[], const int n, int c)
{
		for (int i = 0; i < c; i++)
		{
			int buffer = arr[n-1];
			for (int l = n-1; l > 0; l--)
			{
				arr[l] = arr[l-1];
			}
			arr[0] = buffer;
		}
		print(arr, n);
}
// double
void fillrand(double arr[], int const n, int minrand, int maxrand)
{
	if (maxrand < minrand)
	{
		int buffer = minrand;
		minrand = maxrand;
		maxrand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = minrand + rand() % (maxrand - minrand);
		arr[i] /= 100;
	}
}
void print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
double sum(const double arr[], const int n)
{
	 double sum = 0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
double avg(const double arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
void shiftleft(double arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		double buffer = arr[0];
		for (int l = 0; l < n - 1; l++)
		{
			arr[l] = arr[l + 1];
		}
		arr[n - 1] = buffer;
	}
	print(arr, n);
}
void shiftright(double arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		double buffer = arr[n - 1];
		for (int l = n - 1; l > 0; l--)
		{
			arr[l] = arr[l - 1];
		}
		arr[0] = buffer;
	}
	print(arr, n);
}
//char
void fillrand(char arr[], int const n, int minrand, int maxrand)
{
	if (maxrand < minrand)
	{
		int buffer = minrand;
		minrand = maxrand;
		maxrand = buffer;
	}
	for (int i = 0; i < n; i++)arr[i] = minrand + rand() % (maxrand - minrand);
}
void print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
int sum(const char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
double avg(const char arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
void shiftleft(char arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int l = 0; l < n - 1; l++)
		{
			arr[l] = arr[l + 1];
		}
		arr[n - 1] = buffer;
	}
	print(arr, n);
}
void shiftright(char arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		double buffer = arr[n - 1];
		for (int l = n - 1; l > 0; l--)
		{
			arr[l] = arr[l - 1];
		}
		arr[0] = buffer;
	}
	print(arr, n);
}