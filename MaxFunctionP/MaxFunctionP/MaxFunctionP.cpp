// MaxFunctionP.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int max(int a,int b)
{
	return a > b ? a : b;
}

int main()
{
	int x;
	int y;
	cout << "请输入数字:" << endl;
	cin >> x;
	cin >> y;
	int ans = max(x, y);
	cout << "较大的数字是:" << ans << endl;
	return 0;
}

