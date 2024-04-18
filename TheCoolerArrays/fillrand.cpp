#include"stdafx.h"
template<typename T>
void FillRand(T arr[], int const n)
{
	for (int i = 0; i < n; i++)arr[i] = rand() % 100;
}