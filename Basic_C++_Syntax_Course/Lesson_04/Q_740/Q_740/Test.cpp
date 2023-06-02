#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE 20
int main()
{
	int arr[SIZE] = { 0 };
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	reverse(arr, arr + SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		printf("N[%d] = %d\n", i, arr[i]);
	}
	return 0;
}