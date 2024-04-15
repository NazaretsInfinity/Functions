#include"stdafx.h"
#include"Constants.h"
#include"fillrand.h"
//#include"fillrand.cpp" // никада на место вызова

void print(const int arr[], const int n);
void print(const double arr[], const int n);// double
void print(const char arr[], const int n); // char
void print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void print(const double arr[ROWS][COLS], const int ROWS, const int COLS);
void print(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int sum(const int arr[], const int n);
double sum(const double arr[], const int n); // double
int sum(const char arr[], const int n); // char
int sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double avg(const int arr[], const int n);
double avg(const double arr[], const int n); // double
double avg(const char arr[], const int n); // char
double avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int min_value(const int arr[], const int n);
double min_value(const double arr[], const int n);
char min_value(const char arr[], const int n);
int min_value(int arr[ROWS][COLS], const int ROWS, const int COLS);
double min_value(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char min_value(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int max_value(const int arr[],const int n);
double max_value(const double arr[],const int n);
char max_value(const char arr[],const int n);
int max_value(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double max_value(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char max_value(const char arr[ROWS][COLS], const int ROWS, const int COLS);

void shift_left(int arr[],const int n, int c);
void shift_left(double arr[],const int n, int c); // double
void shift_left(char arr[],const int n, int c); // char
void shift_left(int arr[ROWS][COLS], const int ROWS, const int COLS, int c);
void shift_left(double arr[ROWS][COLS], const int ROWS, const int COLS, int c);
void shift_left(char arr[ROWS][COLS], const int ROWS, const int COLS, int c);

void shift_right(int arr[],const int n, int c);
void shift_right(double arr[],const int n, int c); // double
void shift_right(char arr[],const int n, int c); // char
void shift_right(int arr[ROWS][COLS], const int ROWS, const int COLS, int c);
void shift_right(double arr[ROWS][COLS], const int ROWS, const int COLS, int c);
void shift_right(char arr[ROWS][COLS], const int ROWS, const int COLS, int c);

void sort(int arr[], const int n);
void sort(double arr[], const int n);
void sort(char arr[], const int n);
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void unique(int arr[], const int n);
void unique(double arr[], const int n);
void unique(char arr[], const int n);

void unique(int arr[ROWS][COLS], const int ROWS,const int COLS);

void main()
{
#ifdef ArrayOff
	const int n = 10;
	int arr[n];
	/*int minrand, maxrand;
	cin >> minrand >> maxrand;*/
	unique(arr,n);
	//fillrand(arr,n);
	print(arr, n);
	cout << "sum of the list - " << sum(arr, n) << endl;
	cout << "Average is - " << avg(arr, n) << endl;
	cout << "Min is - " << min_value(arr, n) << endl;
	cout << "Max is - " << max_value(arr, n) << endl;
	int c;
	cout << "Size of shift: "; cin >> c;
	shift_left(arr, n, c);
	print(arr, n);
	shift_right(arr, n, c);
	print(arr, n);
	sort(arr, n);
	print(arr, n);
#endif

#ifdef ArrayOn
	const int n = 3;
	const int m = 4;
	int arr[n][m];
	/*int minrand, maxrand;
	cin >> minrand >> maxrand;*/
	//FillRand(arr, n, m);
	unique(arr, n, m);
	print(arr, n,m);
	cout << "sum of the list - " << sum(arr, n,m) << endl;
	cout << "Average is - " << avg(arr, n,m) << endl;
	cout << "Min is - " << min_value(arr, n,m) << endl;
	cout << "Max is - " << max_value(arr, n,m) << endl;
	int c;
	cout << "Size of shift: "; cin >> c;
	shift_left(arr, n, m,c);
	print(arr, n, m); cout << endl;
	shift_right(arr, n,m, c);
	print(arr, n, m); cout << endl;
	sort(arr, n,m);
	print(arr, n,m);
#endif
}



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

int sum(const int arr[], const int n)
{
	int sum=0;
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

int min_value(const int arr[], const int n)
{
	int minv=arr[0];
	for (int i = 0; i < n; i++)
	{
		if(arr[i] < minv)minv = arr[i];
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

void shift_left(int arr[], const int n, int c)
{
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int l = 0; l < n-1; l++)
		{
			arr[l] = arr[l + 1];
		}
		 arr[n-1] = buffer;
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

void shift_right(int arr[], const int n, int c)
{
	shift_left(arr, n, n-c);
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

void sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)for (int p = i+1; p < n; p++)if (arr[i] > arr[p])
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
				for (int l = s==r ? c+1 :0; l < COLS; l++)
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
		arr[i] = rand() % (i + 1);
		arr[i] /= 1;
		for (int j = 0; j < i; j++)
			if (arr[j] == arr[i])arr[j] = i;
	}
}
void unique(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (i + 1);
		for (int j = 0; j < i; j++)
			if (arr[j] == arr[i])arr[j] = i;
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
					for (int l = 0; l < (k==i ? j : COLS); l++)
					{
						if (arr[k][l] == arr[i][j] && l!=j)
							unique = false;
					}
				}if (!unique)break;
			} while (!unique);
		}
}