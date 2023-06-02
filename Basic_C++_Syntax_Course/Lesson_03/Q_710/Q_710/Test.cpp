#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	cin >> x;
	int cnt = 0;
	if (x % 2 != 0)
	{
		cout << x << endl;
		cnt++;
	}
	while (cnt < 6)
	{
		x++;
		if (x % 2 != 0)
		{
			cout << x << endl;
			cnt++;
		}
	}
	return 0;
}