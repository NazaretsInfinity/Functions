#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void main()
{
    const int m = 6;
    int brr[m];
    FillRand(brr, m);  
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
    if (maxRand < minRand)
    {
        int buffer = minRand;
        minRand = maxRand;
        maxRand = buffer;
    }
    minRand *= 100;
    maxRand *= 100;
    for (int i = 0; i < n; i++)
    {
        arr[i] = minRand + rand() % (maxRand - minRand);
        arr[i] /= 100;
    }
}


