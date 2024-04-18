#include"stdafx.h"
#include"fillrand.h"
using namespace std;

template<typename T>
void Print(const T arr[], int const n);
template<typename T>
T Sum(const T arr[], int const n);
template<typename T>
double Avg(T arr[], int const n);
template<typename T>
T minvaluein(T arr[], int const n);
template<typename T>
T maxvaluein(T arr[], int const n);
void main() // checking ;3
{
	int const s = 7;
	int mass[s];
	double mass2[s];
	FillRand(mass, s);
	FillRand(mass2, s);
	Print(mass, s);
	cout << endl;
	Print(mass2, s);
	cout << endl;
	cout << "Sum of the list - " << Sum(mass2, s) << endl;
	cout << Avg(mass, s) << endl;
	cout << minvaluein(mass, s) << endl;
	cout << maxvaluein(mass, s);
} // done checking



template<typename T>
void Print(const T arr[], int const n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
}
template<typename T>
T Sum(const T arr[], int const n)
{
	T sum=0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
template<typename T>
double Avg(T arr[], int const n)
{
	double avg = (double)Sum(arr, n) / n;
	return avg;
}
template<typename T>
T minvaluein(T arr[], int const n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] < min)min = arr[i];
	return min;
}
template<typename T>
T maxvaluein(T arr[], int const n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] > max)max = arr[i];
	return max;
}


