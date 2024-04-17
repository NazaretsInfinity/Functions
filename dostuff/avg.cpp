#include"avg.h"
#include"sum.h"
double avg(const int arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(const double arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(const char arr[], const int n)
{
	return (double)sum(arr, n) / n;
}
double avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double avg(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double avg(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)sum(arr, ROWS, COLS) / (ROWS * COLS);
}