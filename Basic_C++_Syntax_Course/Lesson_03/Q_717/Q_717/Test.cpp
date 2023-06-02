#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 1;
	int n = 0;
	cin >> n;
	if (n == 1)
	{
		cout << "0";
	}
	else if (n == 2)
	{
		cout << "0 1";
	}
	else
	{
		cout << "0 1 ";
		for (int i = 3; i <= n; i++)
		{
			int c = a + b;
			cout << c << ' ';
			a = b;
			b = c;
		}
	}
	
	return 0;
}