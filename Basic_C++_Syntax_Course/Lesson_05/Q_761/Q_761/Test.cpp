#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[110];
	fgets(str, 101, stdin);
	int cnt = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}