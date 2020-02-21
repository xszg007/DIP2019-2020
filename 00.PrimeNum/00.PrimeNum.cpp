// 00.PrimeNum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;//

int PrimeNum(int n)
{
	if (n % 2 == 0)
	{
		return 0;
	}
	for (int i = 3; i < n / 2; i = i + 2)
	{
		if (n%i == 0)
		{
			return 0;
			
		}
	}
	return 1;

}

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (PrimeNum(i) == 1)
		{
			cout << i << "\n";
		}
	}
	system("pause");
    return 0;
}

