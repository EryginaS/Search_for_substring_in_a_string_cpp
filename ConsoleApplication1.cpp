// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int const n = 256;


int main()
{
	setlocale(LC_ALL, "Russian");
	char Ma[21] = "abcdefbcdefcsabababa";
	char a[n];
	int i = 0, j = 0, l = 0;


	cout << "Введите сочетание: ";
	gets_s(a);
	l = strlen(a);

	if (l > 20)
	{

		cout << "Ваша строка больше исходной, попробуйте еще раз. ";

	}
	else {
		while (i < 21)
		{
			if (a[j] == Ma[i])
			{
				if (j == l-1)
				{
					cout << "Совпадение найдено."<<"\n";

					system("pause");
					break;
				}
				else {
					i++;
					j++;

				}

			}
			else {
				j = 0;
				i++;
			}
			if (i == 20)
			{
				cout << "Совпадений не найдено!" << "\n";
				system("pause");
		    }
		}
	}
	
	return 0;
}




