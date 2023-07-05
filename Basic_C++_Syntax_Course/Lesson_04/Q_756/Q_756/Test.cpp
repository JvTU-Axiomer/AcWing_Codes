#include <cstdio>
#include <iostream>
using namespace std;

const int N = 110;
int res[N][N];

int main()
{
	int n, m;
	cin >> n >> m;

	int dx[] = { 0, 1, 0, -1 };
	int dy[] = { 1, 0, -1, 0 };

	for (int x = 0, y = 0, d = 0, k = 1; k <= n * m; k++)
	{
		res[x][y] = k;
		int a = x + dx[d], b = y + dy[d];
		//判断是否撞墙：
		if (a < 0 || a >= n || b < 0 || b >= m || res[a][b])
		{
			//如果碰壁或越界，则对偏移量进行调整：
			//顺时针旋转90°：
			d = (d + 1) % 4;
			a = x + dx[d];
			b = y + dy[d];
		}
		//下一次赋值的坐标：
		x = a;
		y = b;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << res[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}