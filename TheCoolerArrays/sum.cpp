#include"sum.h"
template<typename T>
T Sum(const T arr[], int const n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}