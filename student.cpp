#include "student.h"


student::student(string na,int n)
{
	name=na;
	num=n;
}


student::~student(void)
{
}
void student:: setnameid()
{
	cin>>name>>num;
}
void student::displaynameid()
{
	cout<<name<<" "<<num;
}
