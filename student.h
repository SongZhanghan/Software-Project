//Ñ§ÉúÀà
#pragma once
#include<iostream>
#include<string>
using namespace std;
class student
{
public:
	student(){};
	student(string,int);
	~student(void);
	void setnameid();
	void displaynameid();
	virtual void setmajor()=0;
	virtual string getmajor()=0;
	virtual void setadvisor()=0;
	virtual string getadvisor()=0;
protected:
	string name;
	int num;
};

