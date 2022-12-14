#include <iostream>
#include <cmath>
using namespace std;
double y(const double x);
int main()
{
	double fy, fk, z ;
	int n;
	cout << "fy = "; cin >> fy;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;
	double df = (fk - fy) / n;
	double f = fy;
	while (f <= fk)
	{
		z = y(f/2)+(y(f+1))*(y(f+1));
		cout << f << " " << z << endl;
		f += df;
	}
	return 0;
}
double y(const double x)
{
	if (abs(x) >= 1)
		return exp(x)/(1+exp(x)+sin(x));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = -x * x / ((2 * j) - 7) * ((2 * j) - 6) * ((2 * j) - 5) * ((2 * j) - 4) * ((2 * j) - 3) * ((2 * j) - 2) * ((2 * j) - 1) * (2 * j);
			a *= R;
			S += a;
		} while (j < 8);
		return S;
	}
}