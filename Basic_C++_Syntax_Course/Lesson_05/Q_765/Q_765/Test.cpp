#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	string str_new;
	for (char c : str)
	{
		str_new = str_new + c + ' ';
	}
	str_new.pop_back();	//把最后一个字符删掉.

	cout << str_new << endl;

	return 0;
}