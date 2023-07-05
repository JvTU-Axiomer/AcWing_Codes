#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		int x, y;
		if (s1 == "Hunter") x = 0;
		else if (s1 == "Bear") x = 1;
		else x = 2;
		if (s2 == "Hunter") y = 0;
		else if (s2 == "Bear") y = 1;
		else y = 2;
		if (x == y)
		{
			cout << "Tie" << endl;
		}
		else if (x == (y + 1) % 3)
		{
			cout << "Player1" << endl;
		}
		else
		{
			cout << "Player2" << endl;
		}
	}
	return 0;
}