#include"stdafx.h"
#include"Constants.h"
#include"fillrand.h"
#include"print.h"
#include"sum.h"
#include"avg.h"
#include"min.h"
#include"max.h"
#include"shiftLeft.h"
#include"shiftRight.h"
#include"sort.h"
#include"unique.h"
//#include"fillrand.cpp" // никада на место вызова

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

