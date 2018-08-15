#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
	Student():m_strAge(4),m_strName("huang")
	{
		cout << m_strName << "is " << m_strAge << " years old." << endl;
	}
	string getName()
	{
		return m_strName;
	}

private:
	string m_strName;
	int m_strAge;
};

int main()
{
	Student stu1;
	//cout << stu1.getName() << endl;
	system("pause");
	return 0;

}
