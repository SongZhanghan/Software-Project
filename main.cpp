#include"poststud.h"
#include"student.h"
#include"understud.h"
/*���ߣ���1604-2  SZH
--���ڣ�2019.6.10
--���ܣ���ϰ�����๹�캯����ʹ�ã�
--��ѧ���̳�ѧ�����о����̳д�ѧ��
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