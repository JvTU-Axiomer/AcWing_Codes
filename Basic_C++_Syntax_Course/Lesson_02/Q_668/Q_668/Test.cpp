#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int x, y;
	x = a * 60 + b;
	y = c * 60 + d;
	int ret;
	int h, m;
	if (x > y)
	{
		ret = 24 * 60 - x + y;
		h = ret / 60;
		m = ret % 60;
	}
	else if (x < y)
	{
		ret = y - x;
		h = ret / 60;
		m = ret % 60;
	}
	else
	{
		h = 24;
		m = 0;
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
	return 0;
}