#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[40];
	char ch;
	fgets(arr, 100, stdin);
	cin >> ch;
	for (int i = 0; arr[i]; i++)
	{
		if (arr[i] == ch)
		{
			arr[i] = '#';
		}
	}
	if (arr[strlen(arr) - 1] == '\n')
	{
		arr[strlen(arr) - 1] = '\0';
	}
	cout << arr << endl;
	return 0;
}