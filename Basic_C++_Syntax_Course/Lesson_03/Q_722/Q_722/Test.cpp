#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	if (m > n)
	{
		int temp = m;
		m = n;
		n = temp;
	}
	while (true)
	{
		int sum = 0;
		if (m <= 0 || n <= 0)
		{
			break;
		}
		else
		{
			for (int i = m; i <= n; i++)
			{
				sum = sum + i;
				cout << i << ' ';
			}
			cout << "Sum=" << sum << endl;
		}
		cin >> m >> n;
		if (m > n)
		{
			int temp = m;
			m = n;
			n = temp;
		}
	}
	return 0;
}