#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	string str, substr;
	while (cin >> str >> substr)
	{
		int max_index = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] > str[max_index])
			{
				max_index = i;
			}
		}
		string laststr = str.substr(max_index + 1);
		string prestr = str.substr(0, max_index + 1);
		str = prestr + substr + laststr;

		cout << str << endl;
	}
	return 0;
}