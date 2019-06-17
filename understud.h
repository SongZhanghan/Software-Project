//毕业生类
#pragma once
#include"student.h"
class understud:public student
{
public:
	understud(){};
	understud(string na,int n,string m):student(na,n)
	{
		major=m;

	}//派生类的构造函数要另外定义，不能继承
	~understud(void);
	void setmajor();
	string getmajor();
protected:
	string major;

};

