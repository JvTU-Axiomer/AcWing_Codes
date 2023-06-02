#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int c = 0;
	char ch = 0;
	cin >> c >> ch;
	double arr[12][12];
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> arr[i][j];
		}
	}
	double sum = 0;
	for (int i = 0; i < 12; i++)
	{
		sum += arr[i][c];
	}
	if (ch == 'S')
	{
		printf("%.1lf\n", sum);
	}
	else
	{
		printf("%.1lf\n", sum / 12);
	}
	return 0;
}