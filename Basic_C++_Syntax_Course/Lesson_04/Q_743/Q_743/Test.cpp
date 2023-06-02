#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double m[12][12];
	int l = 0;
	char t = '0';
	cin >> l >> t;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> m[i][j];
		}
	}
	if (t == 'S')
	{
		double sum = 0;
		for (int i = 0; i < 12; i++)
		{
			sum += m[l][i];
		}
		printf("%.1lf\n", sum);
	}
	else
	{
		double sum = 0;
		for (int i = 0; i < 12; i++)
		{
			sum += m[l][i];
		}
		printf("%.1lf\n", sum / 12);
	}
	return 0;
}