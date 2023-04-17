#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	double y;
	double x;
	cin >> a >> b >> c >> d;
	x = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
	printf("Media: %.1lf", x);
	if (x >= 7)
	{
		cout << "Aluno aprovado." << endl;
	}
	else if (x < 5)
	{
		cout << "Aluno reprovado." << endl;
	}
	else
	{
		cout << "Aluno em exame." << endl;
		cin >> y;
		printf("Nota do exame: %.1lf\n", y);
		x = (x + y) / 2.0;
		if (x >= 5)
		{
			cout << "Aluno aprovado." << endl;
		}
		else
		{
			cout << "Aluno reprovado." << endl;
		}
		printf("Media final: %.1lf\n", x);
	}
	return 0;
}