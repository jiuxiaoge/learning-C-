// demo.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include "Person.h"
#include "Worker.h"
using namespace std;

int main()
{
	Worker *p = new Worker;
	p->m_iAge = 10;
	p->m_strName = "jiuxiaoge";
	p->m_iMoney = 2000;
	p->eat();
	p->work();
	
	cout << p->m_strName << (*p).m_iAge << " " << (*p).m_iMoney << endl;
	delete p;
	p = NULL;
	system("pause");
    return 0;
}

