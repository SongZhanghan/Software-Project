//研究生类
#pragma once
#include"understud.h"
class poststud:public understud
{
public:
	poststud(string na="***",int n=-1,string m="###",string tna="&&&")
	{
		name=na;
		num=n;
		major=m;
		tname=tna;
	}
	~poststud(void);
	void setadvisor();
	string getadvisor();
private:
	string tname;
};

