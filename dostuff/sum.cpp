#include"sum.h"
int sum(const int arr[], const int n)
{
	int sum = 0;
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
int sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)sum += arr[i][j];
	return sum;
}
double sum(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)sum += arr[i][j];
	return sum;
}
int sum(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)sum += arr[i][j];
	return sum;
}