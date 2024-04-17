#include"sort.h"
void sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)for (int p = i + 1; p < n; p++)if (arr[i] > arr[p])
	{
		int buff = arr[i];
		arr[i] = arr[p];
		arr[p] = buff;
	}
}
void sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)for (int p = i; p < n; p++)if (arr[i] > arr[p])
	{
		double buff = arr[i];
		arr[i] = arr[p];
		arr[p] = buff;
	}
}
void sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)for (int p = i; p < n; p++)if (arr[i] > arr[p])
	{
		char buff = arr[i];
		arr[i] = arr[p];
		arr[p] = buff;
	}
}
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int itt;
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			for (int s = r; s < ROWS; s++)
				for (int l = s == r ? c + 1 : 0; l < COLS; l++)
				{
					/*if (s == r && l==0)l = c+1;
					if(l == COLS)break;*/
					if (arr[r][c] > arr[s][l])
					{
						int buff = arr[r][c];
						arr[r][c] = arr[s][l];
						arr[s][l] = buff;
					}
				}
}
void sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{

	for (int r = 0; r < ROWS; r++)for (int c = 0; c < COLS; c++)for (int s = 0; s < ROWS; s++)
		for (int l = 0; l < COLS; l++)if (arr[s][l] < arr[r][c])
		{
			double buff = arr[r][c];
			arr[r][c] = arr[s][l];
			arr[s][l] = buff;
		}
}
void sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int r = 0; r < ROWS; r++)for (int c = 0; c < COLS; c++)for (int s = 0; s < ROWS; s++)
		for (int l = 0; l < COLS; l++)if (arr[s][l] < arr[r][c])
		{
			char buff = arr[r][c];
			arr[r][c] = arr[s][l];
			arr[s][l] = buff;
		}
}