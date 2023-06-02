#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n = 6;
	int cnt = 0;
	while (true && n != 0)
	{
		double a = 0;
		cin >> a;
		if (a > 0)
		{
			cnt++;
		}
		n--;
	}
	cout << cnt << " positive numbers" << endl;
	return 0;
}