#include"max.h"

int max_value(const int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
double max_value(const double arr[], const int n)
{
	double maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
char max_value(const char arr[], const int n)
{
	char maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
int max_value(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValue;
	maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (arr[i][j] > maxValue)maxValue = arr[i][j];
	return maxValue;
}
double max_value(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double maxValue;
	maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (arr[i][j] > maxValue)maxValue = arr[i][j];
	return maxValue;
}
char max_value(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char maxValue;
	maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (arr[i][j] > maxValue)maxValue = arr[i][j];
	return maxValue;
}