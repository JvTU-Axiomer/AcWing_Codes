#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int c_cnt = 0;
	int r_cnt = 0;
	int f_cnt = 0;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		char ani;
		cin >> a;
		cin >> ani;
		if (ani == 'C')
		{
			c_cnt += a;
		}
		else if (ani == 'R')
		{
			r_cnt += a;
		}
		else
		{
			f_cnt += a;
		}
	}
	int sum = 0;
	sum = c_cnt + r_cnt + f_cnt;
	printf("Total: %d animals\n", sum);
	printf("Total coneys: %d\n", c_cnt);
	printf("Total rats: %d\n", r_cnt);
	printf("Total frogs: %d\n", f_cnt);
	printf("Percentage of coneys: %.2lf %%\n", 1.0 * 100 * c_cnt / sum);
	printf("Percentage of rats: %.2lf %%\n", 1.0 * 100 * r_cnt / sum);
	printf("Percentage of frogs: %.2lf %%\n", 1.0 * 100 * f_cnt / sum);
	return 0;
}