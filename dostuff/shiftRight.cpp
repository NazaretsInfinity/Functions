#include"shiftRight.h"
#include"shiftLeft.h"
void shift_right(int arr[], const int n, int c)
{
	shift_left(arr, n, n - c);
}
void shift_right(double arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		double buffer = arr[n - 1];
		for (int l = n - 1; l > 0; l--)
		{
			arr[l] = arr[l - 1];
		}
		arr[0] = buffer;
	}
}
void shift_right(char arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		char buffer = arr[n - 1];
		for (int l = n - 1; l > 0; l--)
		{
			arr[l] = arr[l - 1];
		}
		arr[0] = buffer;
	}
}
void shift_right(int arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	shift_left(arr, ROWS, COLS, ROWS * COLS - c);
}
void shift_right(double arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int s = 0; s < c; s++)
	{
		double buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0)
				{
					arr[i][j] = arr[i - 1][COLS - 1];
				}
				else
				{
					arr[i][j] = arr[i][j - 1];
				}
			}
		}
		arr[0][0] = buffer;
	}

}
void shift_right(char arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int s = 0; s < c; s++)
	{
		char buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0)
				{
					arr[i][j] = arr[i - 1][COLS - 1];
				}
				else
				{
					arr[i][j] = arr[i][j - 1];
				}
			}
		}
		arr[0][0] = buffer;
	}
}
