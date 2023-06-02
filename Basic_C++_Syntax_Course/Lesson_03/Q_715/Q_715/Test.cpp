#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 2; i < 10000; i++)
	{
		if (i % n == 2)
		{
			cout << i << endl;
		}
	}
	return 0;
}