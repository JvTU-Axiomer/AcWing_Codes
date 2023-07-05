#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	char ch;
	double m[12][12];
	cin >> ch;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> m[i][j];
		}
	}
	double sum = 0;
	int cnt = 0;
	for (int j = 7; j < 12; j++)
	{
		for (int i = 12 - j; i < j; i++)
		{
			sum = sum + m[i][j];
			cnt++;
		}
	}
	if (ch == 'S')
	{
		printf("%.1lf\n", sum);
	}
	else
	{
		printf("%.1lf\n", sum / cnt);
	}
	return 0;
}