#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	double A, B, C;
	cin >> A >> B >> C;
	if (A > B && B > C)
	{
		a = A;
		b = B;
		c = C;
	}
	else if (A > C && C > B)
	{
		a = A;
		b = C;
		c = B;
	}
	else if (B > A && A > C)
	{
		a = B;
		b = A;
		c = C;
	}
	else if (B > C && C > A)
	{
		a = B;
		b = C;
		c = A;
	}
	else if (C > A && A > B)
	{
		a = C;
		b = A;
		c = B;
	}
	else
	{
		a = C;
		b = B;
		c = A;
	}

	if (a >= b + c)
	{
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else {
		if (a * a == b * b + c * c)
		{
			cout << "TRIANGULO RETANGULO" << endl;
		}
		if (a * a > b * b + c * c)
		{
			cout << "TRIANGULO OBTUSANGULO" << endl;
		}
		if (a * a < b * b + c * c)
		{
			cout << "TRIANGULO ACUTANGULO" << endl;
		}
		if (a == b && b == c)
		{
			cout << "TRIANGULO EQUILATERO" << endl;
		}
		else if (a == b && a != c || a == c && a != b || b == c && a != b)
		{
			cout << "TRIANGULO ISOSCELES" << endl;
		}
	}
	
	return 0;
}