#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double money;
	cin >> money;
	double ret;
	if (money >= 0 && money <= 2000)
	{
		cout << "Isento" << endl;
	}
	else 
	{
		if (money >= 2000.01 && money <= 3000)
		{
			ret = (money - 2000) * 0.08;
		}
		else if (money >= 3000.01 && money <= 4500)
		{
			ret = 80 + (money - 3000) * 0.18;
		}
		else
		{
			ret = 80 + 270 + (money - 4500) * 0.28;
		}
		printf("R$ %.2lf\n", ret);
	}
	return 0;
}