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

int min_value(const int arr[], const int n);

void shift_left(int arr[],const int n, int c);
void shift_left(double arr[],const int n, int c); // double
void shift_left(char arr[],const int n, int c); // char

void shift_right(int arr[],const int n, int c);
void shift_right(double arr[],const int n, int c); // double
void shift_right(char arr[],const int n, int c); // char

void sort(int arr[], const int n);
void sort(double arr[], const int n);
void sort(char arr[], const int n);

void main()
{
	
	const int n = 7;
	double arr[n];
	/*int minrand, maxrand;
	cin >> minrand >> maxrand;*/
	fillrand(arr,n);
	print(arr, n);
	cout << "sum of the list - " << sum(arr, n) << endl;
	cout << "Average is - " << avg(arr, n) << endl;
	int c;
	cout << "Size of shift: "; cin >> c;
	//shift_left(arr, n, c);
	//shift_right(arr, n, c);
	sort(arr, n);
	print(arr, n);
}

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

void print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
void print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
void print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}

int sum(const int arr[], const int n)
{
	int sum=0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
double sum(const double arr[], const int n)
{
	 double sum = 0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
int sum(const char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}

double avg(const int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(const double arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(const char arr[], const int n)
{
	return (double)sum(arr, n) / n;
}

int min_value(const int arr[], const int n)
{
	int minv=arr[0];
	for (int i = 0; i < n; i++)
	{
		if(arr[i] < minv)minv = arr[i];
	}
	return minv;
}

void shift_left(int arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int l = 0; l < n-1; l++)
		{
			arr[l] = arr[l + 1];
		}
		 arr[n-1] = buffer;
	}
}
void shift_left(double arr[], const int n, int c)
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
}
void shift_left(char arr[], const int n, int c)
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
}

void shift_right(int arr[], const int n, int c)
{
	shift_left(arr, n, n-c);
}
void shift_right(double arr[], const int n, int c)
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
}
void shift_right(char arr[], const int n, int c)
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
}

void sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)for (int p = i; p < n; p++)if (arr[i] > arr[p])
	{
		int buff = arr[i];
		arr[i] = arr[p];
		arr[p] = buff;
	}
}
void sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)for (int p = i; p < n; p++)if (arr[i] > arr[p])
	{
		double buff = arr[i];
		arr[i] = arr[p];
		arr[p] = buff;
	}
}
void sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)for (int p = i; p < n; p++)if (arr[i] > arr[p])
	{
		char buff = arr[i];
		arr[i] = arr[p];
		arr[p] = buff;
	}
}


