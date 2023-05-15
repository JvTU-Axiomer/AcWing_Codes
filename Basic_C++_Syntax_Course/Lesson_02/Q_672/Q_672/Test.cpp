#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double salary;
	cin >> salary;
	double res = 0;
	double y = 0;
	if (salary > 2000)
	{
		y = 3000;
		if (salary <= 3000) y = salary;
		res += (y - 2000) * 0.08;
	}
	if (salary > 3000)
	{
		y = 4500;
		if (salary <= 4500) y = salary;
		res += (y - 3000) * 0.18;
	}
	if (salary > 4500)
		res += (salary - 4500) * 0.28;
	if (res == 0) printf("Isento\n");
	else printf("R$ %.2lf\n", res);
	return 0;
}