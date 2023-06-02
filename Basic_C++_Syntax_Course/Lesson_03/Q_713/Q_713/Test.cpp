#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int in_cnt = 0;
	int out_cnt = 0;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		cin >> a;
		if (a >= 10 && a <= 20)
		{
			in_cnt++;
		}
		else
		{
			out_cnt++;
		}
	}
	cout << in_cnt << " in" << endl;
	cout << out_cnt << " out" << endl;
	return 0;
}