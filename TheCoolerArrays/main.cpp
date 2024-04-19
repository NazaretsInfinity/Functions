#include"fillrand.h"
#include"fillrand.cpp"
#include"print.h"
#include"print.cpp"
#include"sum.h"
#include"sum.cpp"
#include"avg.h"
#include"avg.cpp"
#include"min.h"
#include"min.cpp"
#include"max.h"
#include"max.cpp"


void main() // checking ;3
{
	int const s = 7;
	int mass[s];
	double mass2[s];
    FillRand(mass, s);
	Print(mass, s);
	cout << "Sum of the list - " << Sum(mass, s) << endl;
	cout <<"Average - " << Avg(mass, s) << endl;
	cout <<"Min - "<< minvaluein(mass, s) << endl;
	cout <<"Max - "<< maxvaluein(mass, s);
	cout << endl;
	FillRand(mass2, s);
	Print(mass2, s);
	cout << "Sum of the double list - " << Sum(mass2, s) << endl;
	cout << "Average of double list - " << Avg(mass2, s) << endl;
	cout << "Min - " << minvaluein(mass2, s) << endl;
	cout << "Max - " << maxvaluein(mass2, s);
} // done checking


