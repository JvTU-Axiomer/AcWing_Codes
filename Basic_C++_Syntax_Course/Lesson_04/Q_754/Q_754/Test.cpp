#include <cstdio>
#include <iostream>
using namespace std;

//元素个数为10000的二维矩阵比较大，建议定义为全局变量，这样不会溢出.
int q[100][100] = { 0 };
int main()
{
	int n;
	while (cin >> n, n)
	{
		for (int i = 0; i < n; i++)
		{
			//对角线上的元素均为1：
			q[i][i] = 1;
			//从对角线上的每一个元素向右和向下延伸：
			for (int j = i + 1, k = 2; j < n; j++, k++)
			{
				//每一行的元素：
				q[i][j] = k;
			}
			for (int j = i + 1, k = 2; j < n; j++, k++)
			{
				//每一列的元素：
				q[j][i] = k;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << q[i][j] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}