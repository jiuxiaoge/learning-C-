#pragma once
#include "stdafx.h"
#include<string>
using namespace std;
class Person
{
public:
	Person();
	~Person();
	string m_strName;
	int m_iAge;
	void eat();
private:
	int m_test = 10;
};

