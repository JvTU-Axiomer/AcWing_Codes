#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a;
	int n = 0;
	cin >> n;
	while (cin >> n, n <= 0);	//´Ó×óµ½ÓÒÖ´ÐÐ
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a + i;
	}
	cout << sum << endl;
	return 0;
}