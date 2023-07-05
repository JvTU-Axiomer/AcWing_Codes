#include <cstdio>
#include <iostream>
using namespace std;

int cnt[26];
char arr[100010];
int main()
{
	cin >> arr;

	for (int i = 0; arr[i]; i++)
	{
		cnt[(arr[i] - 'a')]++;
	}
	for (int i = 0; arr[i]; i++)
	{
		if (cnt[arr[i] - 'a'] == 1)
		{
			cout << arr[i];

			return 0;
		}
	}
	puts("no");

	return 0;
}