#include<iostream>
using namespace std;
#define tab "\t"
const int ROWS = 3; // количество строк
const int COLS = 4; // количество элементов строки

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minrand = 0, int maxrand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minrand = 0, int maxrand = 1000);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minrand = 0, int maxrand = 100);

void print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void print(const double arr[ROWS][COLS], const int ROWS, const int COLS);
void print(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int min_value(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double min_value(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char min_value(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int max_value(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double max_value(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char max_value(const char arr[ROWS][COLS], const int ROWS, const int COLS);

void shift_left(int arr[ROWS][COLS], const int ROWS, const int COLS,int c);
void shift_left(double arr[ROWS][COLS], const int ROWS, const int COLS,int c);
void shift_left(char arr[ROWS][COLS], const int ROWS, const int COLS,int c);

void shift_right(int arr[ROWS][COLS], const int ROWS, const int COLS,int c);
void shift_right(double arr[ROWS][COLS], const int ROWS, const int COLS,int c);
void shift_right(char arr[ROWS][COLS], const int ROWS, const int COLS,int c);

void main()
{
	int dbl_arr[ROWS][COLS];
	FillRand(dbl_arr, ROWS, COLS);
	print(dbl_arr, ROWS, COLS);
	cout << "Sum of the tablet - " << sum(dbl_arr, ROWS, COLS) << endl;
	cout << "Min is " << min_value(dbl_arr, ROWS, COLS) << endl;
	cout << "Max is " << max_value(dbl_arr, ROWS, COLS) << endl;
	cout << "Average is " << avg(dbl_arr, ROWS, COLS) << endl;
	int c = 5;
	shift_left(dbl_arr, ROWS, COLS, c);
	cout << endl;
	shift_right(dbl_arr, ROWS, COLS, c);
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minrand, int maxrand)
{
	for (int i = 0; i < ROWS; i++)for(int j = 0; j < COLS; j++)arr[i][j] =minrand + rand() % (maxrand - minrand);
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minrand, int maxrand)
{
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)
	{
			arr[i][j] = minrand + rand() % (maxrand - minrand);
			arr[i][j]/= 100;
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minrand, int maxrand)
{
	for (int i = 0; i < ROWS; i++)for(int j = 0; j < COLS; j++)arr[i][j] = minrand + rand() % (maxrand - minrand);
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

int min_value(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue;
	minValue = arr[0][0];
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
	double minValue;
	minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];
		}
	return minValue;
}
char min_value(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char minValue;
	minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)for (int j = 0; j < COLS; j++)
	{
		if (arr[i][j] < minValue)minValue = arr[i][j];
	}
	return minValue;
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

void shift_left(int arr[ROWS][COLS], const int ROWS, const int COLS,int c)
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
		arr[ROWS-1][COLS-1] = buffer;
	}
	print(arr,ROWS,COLS);
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
	print(arr, ROWS, COLS);
}
void shift_left(char arr[ROWS][COLS], const int ROWS, const int COLS, int c)
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
	print(arr, ROWS, COLS);
}

void shift_right(int arr[ROWS][COLS], const int ROWS, const int COLS, int c)
{
	for (int s = 0; s < c; s++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];
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
	print(arr, ROWS, COLS);
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
	print(arr, ROWS, COLS);
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
	print(arr, ROWS, COLS);
}
