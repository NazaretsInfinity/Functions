#include<iostream>
using namespace std;
void FillRand(int arr[],int const n=1);
void Print(int arr[],int const n=1);
int Sum(int arr[], int const n = 1, int sum=0);
double Avg(int arr[], int const n=1, int sum=0);
int minvaluein(int arr[], int const n=1);
int maxvaluein(int arr[], int const n=1);
void main() // checking ;3
{
	int const s = 7;
	int mass[s];
	FillRand(mass,s);
	Print(mass,s);
	cout << endl;
	cout << Sum(mass,s) << endl;
	cout << Avg(mass,s) << endl;
	cout << minvaluein(mass,s) << endl;
	cout << maxvaluein(mass,s);
} // done checking
void FillRand(int arr[], int const n)
{
    for (int i=0; i < n; i++)arr[i] = rand();
}
void Print(int arr[], int const n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
}
int Sum(int arr[],int const n, int sum)
{
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
double Avg(int arr[], int const n,int sum)
{
	double avg;
	for (int i = 0; i < n; i++)sum += arr[i];
	return avg = (double)sum / n;
}
int minvaluein(int arr[], int const n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] < min)min = arr[i];
	return min;
}
int maxvaluein(int arr[], int const n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] > max)max = arr[i];
	return max;
}

