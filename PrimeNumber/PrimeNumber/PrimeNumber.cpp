// PrimeNumber.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
//compare函数得写在prime前才能调用
bool compare(int x)
{
	int i = 0;
	if (1 == x || 2 == x)
	{
		return true;
	}
	int max = 0;
	max = static_cast<int>(sqrt(x));
	for (i = 2; i <= max; i++)
	{
		if (x%i == 0)
		{
			return false;
		}
	}
	return true;
}

void prime()
{
	int n;
	bool m;
	cout << "Please input a number:" << endl;
	cin >> n;
	cout << "Calculating" << endl;
	m = compare(n);
	if(m=true)
	{
		cout << n << " is a prime number!"<<endl;
	}
	else
	{
		cout << n << " isn't a prime number!" << endl;
	}
}

int main()
{
	void prime();
	bool compare(int);
	cout << "------------Prime Number------------" << endl;
	prime();
	return 0;
}

