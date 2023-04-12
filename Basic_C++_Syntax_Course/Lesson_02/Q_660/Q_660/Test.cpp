#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x >> y;
	if (x == 1) printf("Total: R$ %.2lf\n", 4 * y);
	else if (x == 2) printf("Total: R$ %.2lf\n", 4.5 * y);
	else if (x == 3) printf("Total: R$ %.2lf\n", 5 * y);
	else if (x == 4) printf("Total: R$ %.2lf\n", 2 * y);
	else printf("Total: R$ %.2lf\n", 1.5 * y);
	return 0;
}