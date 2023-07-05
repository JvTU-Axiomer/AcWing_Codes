#include <cstdio>
#include <iostream>
using namespace std;
#define M 100
int main()
{
	int n;
	while (cin >> n, n)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				int up = i, down = n - i + 1, left = j, right = n - j + 1;
				cout << min(min(up, down), min(left, right)) << ' ';
			}
			cout << endl;
		}

		cout << endl;
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