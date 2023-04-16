#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	int x, y, z;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		if (b > c)
		{
			x = a;
			y = b;
			z = c;
		}
		else
		{
			x = a;
			y = c;
			z = b;
		}
	}
	else if (b > a && b > c)
	{
		if (a > c)
		{
			x = b;
			y = a;
			z = c;
		}
		else
		{
			x = b;
			y = c;
			z = a;
		}
	}
	else if (c > a && c > b)
	{
		if (a > b)
		{
			x = c;
			y = a;
			z = b;
		}
		else
		{
			x = c;
			y = b;
			z = a;
		}
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