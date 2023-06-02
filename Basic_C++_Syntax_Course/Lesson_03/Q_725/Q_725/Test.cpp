#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		cin >> x;
		int sum = 1;
		for (int j = 2; j <= sqrt(x); j++)
		{
			if (x % j == 0)
			{ 
				sum = sum + j + x / j;
			}
		}
		if (x == 1)
		{
			cout << "1" << " is not perfect" << endl;
		}
		else if (sum == x)
		{
			cout << x << " is perfect" << endl;
		}
		else
		{
			cout << x << " is not perfect" << endl;
		}
	}
	return 0;
}