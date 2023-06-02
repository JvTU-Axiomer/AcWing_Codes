#include <cstdio>
#include <iostream>
using namespace std;
#define MAX 1010
int main()
{
	int n = 0;
	cin >> n;
	int arr[MAX] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int min = arr[0];
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	printf("Minimum value: %d\n", min);
	printf("Position: %d\n", index);
	return 0;
}