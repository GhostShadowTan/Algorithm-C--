// Struct Practice.cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

struct student
{
	char name[20];
	int number;
	char gender;
	int age;
	double height;
	double weight;
}

int main()
{
	student stu1 = { "Lee",100001,"M",15,1.73,71 };
	student stu2 = { "Karl",100002,"M",16,1.75,65 };
}

