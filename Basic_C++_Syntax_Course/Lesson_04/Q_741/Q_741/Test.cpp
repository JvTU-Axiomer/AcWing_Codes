#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int t = 0;
	int n = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		long int arr[60] = { -1 };
		arr[0] = 0;
		arr[1] = 1;
		if (n == 0)
		{
			printf("Fib(0) = 0\n");
		}
		else if (n == 1)
		{
			printf("Fib(1) = 1\n");
		}
		else
		{
			for (int i = 2; i <= n; i++)
			{
				arr[i] = arr[i - 1] + arr[i - 2];
			}
			printf("Fib(%d) = %ld\n", n, arr[n]);
		}
	}
	return 0;
}