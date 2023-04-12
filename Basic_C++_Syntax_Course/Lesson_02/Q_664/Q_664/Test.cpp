#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		double C = a + b + c;
		printf("Perimetro = %.1lf\n", C);
	}
	else
	{
		double area = (a + b) * c / 2;
		printf("Area = %.1lf\n", area);
	}
	return 0;
}