#include"min.h"
int min_value(const int arr[], const int n)
{
	int minv = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minv)minv = arr[i];
	}
	return minv;
}
double min_value(const double arr[], const int n)
{
	double minv = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minv)minv = arr[i];
	}
	return minv;
}
char min_value(const char arr[], const int n)
{
	char minv = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minv)minv = arr[i];
	}
	return minv;
}
int min_value(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];

		}
	}
	return minValue;
}
double min_value(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)
	{
		if (arr[i][j] < minValue)minValue = arr[i][j];
	}
	return minValue;
}
char min_value(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{

	char minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)
	{
		if (arr[i][j] < minValue)minValue = arr[i][j];
	}
	return minValue;
}