#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	int sum = 0;
	for (int i = x + 1; i < y; i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + i;
		}
	}
	cout << sum << endl;
	return 0;
}