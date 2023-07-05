#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double x;
	cin >> x;
	double m = 0;
	if (x >= 0 && x <= 400)
	{
		m = x * 1.15;
		printf("Novo salario: %.2lf\n", m);
		printf("Reajuste ganho: %.2lf\n", m - x);
		printf("Em percentual: 15 %\n");
	}
	else if (x >= 400.01 && x <= 800)
	{
		m = x * 1.12;
		printf("Novo salario: %.2lf\n", m);
		printf("Reajuste ganho: %.2lf\n", m - x);
		printf("Em percentual: 12 %\n");
	}
	else if (x >= 800.01 && x <= 1200)
	{
		m = x * 1.10;
		printf("Novo salario: %.2lf\n", m);
		printf("Reajuste ganho: %.2lf\n", m - x);
		printf("Em percentual: 10 %\n");
	}
	else if (x >= 1200.01 && x <= 2000)
	{
		m = x * 1.07;
		printf("Novo salario: %.2lf\n", m);
		printf("Reajuste ganho: %.2lf\n", m - x);
		printf("Em percentual: 7 %\n");
	}
	else
	{
		m = x * 1.04;
		printf("Novo salario: %.2lf\n", m);
		printf("Reajuste ganho: %.2lf\n", m - x);
		printf("Em percentual: 4 %\n");
	}
	return 0;
}