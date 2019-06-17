#include"poststud.h"
#include"student.h"
#include"understud.h"
/*作者：信1604-2  SZH
--日期：2019.6.10
--功能：复习派生类构造函数的使用：
--大学生继承学生，研究生继承大学生
*/

int main()
{
	poststud p;
	int flag;
	cin>>flag;
	if(flag==0)
	{
		p.displaynameid();
		cout<<endl<<p.getmajor()<<endl<<p.getadvisor()<<endl;
	}
	else
	{
		p.setnameid();
		p.setmajor();
		p.setadvisor();
		p.displaynameid();
		cout<<endl<<p.getmajor()<<endl<<p.getadvisor()<<endl;
	}
	return 0;

}