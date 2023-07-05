#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	int x, y, z;
	cin >> a >> b >> c;
	x = a;
	y = b;
	z = c;
	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		int t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		int t = b;
		b = c;
		c = t;
	}
	
	cout << z << endl;
	cout << y << endl;
	cout << x << endl;
	cout << "" << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}