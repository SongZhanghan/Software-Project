//��ҵ����
#pragma once
#include"student.h"
class understud:public student
{
public:
	understud(){};
	understud(string na,int n,string m):student(na,n)
	{
		major=m;

	}//������Ĺ��캯��Ҫ���ⶨ�壬���ܼ̳�
	~understud(void);
	void setmajor();
	string getmajor();
protected:
	string major;

};

