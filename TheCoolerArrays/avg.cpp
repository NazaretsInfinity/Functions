template<typename T>
double Avg(const T arr[], int const n)
{
	double avg = (double)Sum(arr, n) / n;
	return avg;
}