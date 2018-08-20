#pragma once
#include "Person.h"
class Worker :
	public Person
{
public:
	Worker();
	~Worker();
	int m_iMoney;
	void work();
private:
};

