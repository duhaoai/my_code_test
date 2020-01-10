#include <iostream>   // 包含头文件iostream
#include <cstring>
using namespace std;  // 使用命名空间std
class Engineer{
	private:int id;
	char *name;
	char *position;
	public:
		void setEngineer(int id1,char name1[20],char position1[20])
		{
			id=id1;
			name=name1;
			position=position1;
		 } 
		Engineer(int id1,char name1[20],char position1[20])
		{
			id=id1;
			name=name1;
			position=position1;
		 } 
		 Engineer(){};
		void printEngineer (); 
~Engineer(){cout<<"destructing..."<<endl;
}
};
void Engineer::printEngineer ()
{
    cout<<"id: "<<id<<", name: "<<name<<", position: "<<position<<endl;//Engineer的成员函数prinEngineer的实现
}
int main()
{
	Engineer e[4];
	e[0].setEngineer(1001,"王含","讲师");  //这些信息换成班上同学
    e[1].setEngineer(1002,"张青","讲师");
    e[2].setEngineer(1003,"赵菁","副教授");
    e[3].setEngineer(1004,"姚琳","教授");
	Engineer * pE1 =new Engineer(1005,"方伟","副教授");
	Engineer * pE2 =new Engineer(1006,"黄玲","教授");
	e[0]. printEngineer ();
	e[1]. printEngineer ();
	e[2]. printEngineer ();
    e[3]. printEngineer ();
	pE1->printEngineer ();
	pE2->printEngineer ();
	delete pE1, pE2;
	return 0;
}
