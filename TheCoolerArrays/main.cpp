#include"fillrand.h"
#include"print.h"
#include"sum.h"
#include"avg.h"
#include"min.h"
#include"max.h"


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


