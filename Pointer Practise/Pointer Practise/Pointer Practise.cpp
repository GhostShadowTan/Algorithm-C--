// Pointer Practise.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double num = 13;
	double *pnum = &num;
	cout << "pnum的内存地址为:" << &pnum << endl;
	cout << "pnum的值味:" << pnum << endl;
	cout << "num的内存地址为:" << &num << endl;
	cout << "指针访问num为:" << *pnum << endl;
	cout << "pnum在内存中的字节数:" << &pnum << endl;
	cout << "num在内存中的字节数:" << &num << endl;
}

