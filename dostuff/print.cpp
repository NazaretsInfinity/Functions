#include"print.h"
void print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
void print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
void print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << tab; cout << endl;
}
void print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)cout << arr[i][j] << tab;
		cout << endl;
	}
}
void print(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)cout << arr[i][j] << tab;
		cout << endl;
	}
}
void print(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)cout << arr[i][j] << tab;
		cout << endl;
	}
}