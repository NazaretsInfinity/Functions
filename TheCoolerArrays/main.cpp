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
	FillRand(mass2, s);
	Print(mass, s);
	Print(mass2, s);
	cout << "Sum of the list - " << Sum(mass, s) << endl;
	cout << Avg(mass, s) << endl;
	cout << minvaluein(mass, s) << endl;
	cout << maxvaluein(mass, s);
} // done checking


