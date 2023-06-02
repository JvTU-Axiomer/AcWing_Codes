#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double m[12][12];
	char t = 0;
	cin >> t;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> m[i][j];
		}
	}
	double sum = 0;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12 - i - 1; j++)
		{
			sum += m[i][j];
		}
	}
	if (t == 'S')
	{
		printf("%.1lf\n", sum);
	}
	else
	{
		printf("%.1lf\n", sum / (132 / 2));
	}
	return 0;
}