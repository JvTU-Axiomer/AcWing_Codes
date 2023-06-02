#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		int y = 0;
		cin >> x >> y;
		if (x > y)
		{
			swap(x, y);
		}
		int sum = 0;
		for (int j = x + 1; j < y; j++)
		{
			if (j % 2 != 0)
			{
				sum = sum + j;
			}
		}	
		cout << sum << endl;
	}
	return 0;
}