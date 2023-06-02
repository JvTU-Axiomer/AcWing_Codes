#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double m[12][12];
	char t = '0';
	cin >> t;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> m[i][j];
		}
	}
	double sum = 0;
	int cnt = 0;
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += m[i][j];
			sum += m[11 - i][j];
			cnt += 2;
		}
	}
	if (t == 'S')
	{
		printf("%.1lf\n", sum);
	}
	else
	{
		printf("%.1lf\n", sum / cnt);
	}
	return 0;
}