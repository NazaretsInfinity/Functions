#include"unique.h"
void unique(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
					unique = false;
				break;
			}
		} while (!unique);

	}
}
void unique(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
					unique = false;
				break;
			}
		} while (!unique);

	}
}
void unique(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % 256;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
					unique = false;
				break;
			}
		} while (!unique);

	}
}
void unique(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[k][l] == arr[i][j] && l != j)
							unique = false;
					}
				}if (!unique)break;
			} while (!unique);
		}
}
void unique(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[k][l] == arr[i][j] && l != j)
							unique = false;
					}
				}if (!unique)break;
			} while (!unique);
		}
}