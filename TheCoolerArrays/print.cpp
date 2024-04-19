#include"print.h"
template<typename T>
void Print(const T arr[], int const n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
}