#define _CRT_SECURE_NO_WARNINGS 1
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char a1[100] = { 0 };
	char a2[100] = { 0 };
	char a3[100] = { 0 };
	scanf("%s", a1);
	getchar();
	scanf("%s", a2);
	getchar();
	scanf("%s", a3);
	getchar();
	if (strcmp(a1, "vertebrado") == 0)
	{
		if (strcmp(a2, "ave") == 0)
		{
			if (strcmp(a3, "carnivoro") == 0)
			{
				cout << "aguia" << endl;
			}
			else if (strcmp(a3, "onivoro") == 0)
			{
				cout << "pomba" << endl;
			}
		}
		else if (strcmp(a2, "mamifero") == 0)
		{
			if (strcmp(a3, "onivoro") == 0)
			{
				cout << "homem" << endl;
			}
			else if (strcmp(a3, "herbivoro") == 0)
			{
				cout << "vaca" << endl;
			}
		}
	}
	else if (strcmp(a1, "invertebrado") == 0)
	{
		if (strcmp(a2, "inseto") == 0)
		{
			if (strcmp(a3, "hematofago") == 0)
			{
				cout << "pulga" << endl;
			}
			else if (strcmp(a3, "herbivoro") == 0)
			{
				cout << "lagarta";
			}
		}
		else if (strcmp(a2, "anelideo") == 0)
		{
			if (strcmp(a3, "hematofago") == 0)
			{
				cout << "sanguessuga" << endl;
			}
			else if (strcmp(a3, "onivoro") == 0)
			{
				cout << "minhoca" << endl;
			}
		}
	}
	return 0;
}