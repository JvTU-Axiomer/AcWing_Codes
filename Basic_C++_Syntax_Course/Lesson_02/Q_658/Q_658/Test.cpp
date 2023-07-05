#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c;
	double ret1, ret2;
	cin >> a >> b >> c;
	double mid = b * b - 4 * a * c;
	if (a == 0 || mid < 0)
	{
		cout << "Impossivel calcular" << endl;
	}
	else
	{
		ret1 = (-1 * b + sqrt(mid)) / (2 * a);
		ret2 = (-1 * b - sqrt(mid)) / (2 * a);
		printf("R1 = %.5lf\n", ret1);
		printf("R2 = %.5lf\n", ret2);
	}
	return 0;
}