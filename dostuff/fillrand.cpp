#include"fillrand.h"
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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minrand, int maxrand)
{
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)arr[i][j] = minrand + rand() % (maxrand - minrand);
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minrand, int maxrand)
{
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)
	{
		arr[i][j] = minrand + rand() % (maxrand - minrand);
		arr[i][j] /= 100;
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minrand, int maxrand)
{
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)arr[i][j] = minrand + rand() % (maxrand - minrand);
}