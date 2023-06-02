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
		int flag = 1;
		cin >> x;
		if (x == 1)
		{
			cout << "1 is not prime" << endl;
		}
		else
		{
			for (int j = 2; j <= sqrt(x); j++)
			{
				if (x % j == 0)
				{
					cout << x << " is not prime" << endl;
					flag = 0;
					break;
				}
			}
			if (flag == 1) cout << x << " is prime" << endl;
		}
	}
	return 0;
}