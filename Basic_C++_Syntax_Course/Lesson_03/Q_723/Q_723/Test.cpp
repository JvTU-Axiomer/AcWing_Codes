#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int k = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++, k++)
		{
			if (j == m)
			{
				cout << "PUM" << endl;
			}
			else
			{
				cout << k << ' ';
			}
		}
	}
	return 0;
}