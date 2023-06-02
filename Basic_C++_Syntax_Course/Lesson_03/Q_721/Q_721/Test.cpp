#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	while (cin >> x && x)
	{
		for (int i = 1; i <= x; i++)
		{
			cout << i << ' ';
		}
		cout << endl;
	}
	return 0;
}