#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	while (n != 0)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int cnt = 0;
				while (1)
				{
					if (i == cnt || i == n - 1 - cnt || j == cnt || j == n - 1 - cnt)
					{
						printf("%d ", cnt + 1);
						break;
					}
					cnt++;
				}
			}
			printf("\n");
		}
		printf("\n");
		cin >> n;
	}
	return 0;
}
/*
1 1 1 1 1 1 1 1
1 2 2 2 2 2 2 1
1 2 3 3 3 3 2 1
1 2 3 4 4 3 2 1
1 2 3 4 4 3 2 1
1 2 3 3 3 3 2 1
1 2 2 2 2 2 2 1
1 1 1 1 1 1 1 1
*/