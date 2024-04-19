#include<iostream>
using namespace std;
void FillRand(int arr[],int const n);
void Print(int arr[],int const n);
int Sum(int arr[], int const n);
double Avg(int arr[], int const n);
int minvaluein(int arr[], int const n);
int maxvaluein(int arr[], int const n);
void search(int arr[], int const);
void main() // checking ;3
{
	int const s = 15;
	int mass[s];
	FillRand(mass,s);
	Print(mass,s);
	cout << endl;
	cout << "Sum of the list - " << Sum(mass, s) << endl;
	cout << "Average - "<<Avg(mass, s) << endl;
	cout <<"Min - "<< minvaluein(mass, s) << endl;
	cout << "Max - "<< maxvaluein(mass, s) << endl;
	search(mass, s);
} // done checking
void FillRand(int arr[], int const n)
{
    for (int i=0; i < n; i++)arr[i] = rand()%6;
}
void Print(int arr[], int const n)
{
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
}
int Sum(int arr[],int const n)
{
	int sum=0;
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}
double Avg(int arr[], int const n)
{
	double avg = (double)Sum(arr, n) / n;
	return avg;
}
int minvaluein(int arr[], int const n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] < min)min = arr[i];
	return min;
}
int maxvaluein(int arr[], int const n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)if (arr[i] > max)max = arr[i];
	return max;
}
void search(int arr[], int const n)
{
	for (int i = 0; i < n; i++)
	{
		int same = 1;
		int check = 0;
		for (int l = i - 1; l >= 0; l--)if(arr[i] == arr[l])
		{
			check++;
			break;
		}
		if (check == 0)
		{
			for (int j = 0; j < n; j++)if (arr[i] == arr[j] && j != i)
				{
					cout << arr[j] << " ";
					same += 1;
				}
		if (same > 1)cout << arr[i] << " amount of repeated numbers: " << same << endl;
		}
	}
}


