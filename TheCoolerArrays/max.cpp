#include"max.h"

template<typename T>
T maxvaluein(T arr[], int const n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] > max)max = arr[i];
	return max;
}