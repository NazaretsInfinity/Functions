#include"shiftLeft.h"
void shift_left(int arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int l = 0; l < n - 1; l++)
		{
			arr[l] = arr[l + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shift_left(double arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		double buffer = arr[0];
		for (int l = 0; l < n - 1; l++)
		{
			arr[l] = arr[l + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shift_left(char arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int l = 0; l < n - 1; l++)
		{
			arr[l] = arr[l + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shift_left(int arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int s = 0; s < c; s++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1)
				{
					arr[i][j] = arr[i + 1][0];
				}
				else
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shift_left(double arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int s = 0; s < c; s++)
	{
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1)
				{
					arr[i][j] = arr[i + 1][0];
				}
				else
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shift_left(char arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int s = 0; s < c; s++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1)
				{
					arr[i][j] = arr[i + 1][0];
				}
				else
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}