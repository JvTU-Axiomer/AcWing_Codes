#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
#define MAX 1000
int main()
{
	char arr[1000];
	fgets(arr, 101, stdin);
	int len = strlen(arr);
	cout << len << endl;

	return 0;
}