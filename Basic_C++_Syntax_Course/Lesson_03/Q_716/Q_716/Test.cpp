#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int x = 0;
	cin >> x;
	int pos = 1;

	int max = x;
	int max_pos = pos;
	while (pos <= 100)
	{
		cin >> x;
		pos++;
		if (x > max)
		{
			max = x;
			max_pos = pos;
		}
	}
	cout << max << endl << max_pos << endl;
	return 0;
}