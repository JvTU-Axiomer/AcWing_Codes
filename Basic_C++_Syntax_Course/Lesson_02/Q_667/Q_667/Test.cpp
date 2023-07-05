#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a < b)
	{
		printf("O JOGO DUROU %d HORA(S)\n", b - a);
	}
	else if (a > b)
	{
		printf("O JOGO DUROU %d HORA(S)\n", 24 - a + b);
	}
	else
	{
		printf("O JOGO DUROU 24 HORA(S)\n");
	}

	return 0;
}