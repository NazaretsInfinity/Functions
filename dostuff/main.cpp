#include<iostream>
using namespace std;
void main()
{
	const int n = 5;
	int arr[n];
	int minrand, maxrand;
	do
	{
		cout << "Min is "; cin >> minrand;
		cout << "Max is "; cin  >> maxrand;
		if (minrand == maxrand)cout << "Let's start over ,Misha, it's all lame." << endl;
	} while (minrand == maxrand);
	//if (maxrand <= minrand)maxrand, minrand = minrand, maxrand;
	if (maxrand <= minrand)
	{
		int buffer = minrand;
		minrand = maxrand;
		maxrand = buffer;
	}
	for (int i = 0; i < n; i++)arr[i] =minrand + rand() % (maxrand-minrand);
	for (int i = 0; i < n; i++)cout << arr[i] << "\t";
	cout << endl;
}