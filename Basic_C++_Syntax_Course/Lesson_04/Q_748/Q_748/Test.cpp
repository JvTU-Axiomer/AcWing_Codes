#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	char ch = 0;
	cin >> ch;
	double arr[12][12];
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> arr[i][j];
		}
	}
	double sum = 0;
	int cnt = 0;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 12 - i; j < 12; j++)
		{
			sum += arr[i][j];
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