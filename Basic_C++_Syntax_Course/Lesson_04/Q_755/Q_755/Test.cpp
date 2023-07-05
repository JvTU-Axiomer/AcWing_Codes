#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
#define M 100
int main()
{
	int n = -1;
	cin >> n;
	while (n != 0)
	{
		int m[M][M];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				m[i][j] = (int)pow(2, i + j);
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%d ", m[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		cin >> n;
	}
}