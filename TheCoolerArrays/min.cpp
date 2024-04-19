#include"min.h"
template<typename T>
T minvaluein(T arr[], int const n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] < min)min = arr[i];
	return min;
}