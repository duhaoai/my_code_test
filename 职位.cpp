#include <iostream>   // ����ͷ�ļ�iostream
#include <cstring>
using namespace std;  // ʹ�������ռ�std
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
    cout<<"id: "<<id<<", name: "<<name<<", position: "<<position<<endl;//Engineer�ĳ�Ա����prinEngineer��ʵ��
}
int main()
{
	Engineer e[4];
	e[0].setEngineer(1001,"����","��ʦ");  //��Щ��Ϣ���ɰ���ͬѧ
    e[1].setEngineer(1002,"����","��ʦ");
    e[2].setEngineer(1003,"��ݼ","������");
    e[3].setEngineer(1004,"Ҧ��","����");
	Engineer * pE1 =new Engineer(1005,"��ΰ","������");
	Engineer * pE2 =new Engineer(1006,"����","����");
	e[0]. printEngineer ();
	e[1]. printEngineer ();
	e[2]. printEngineer ();
    e[3]. printEngineer ();
	pE1->printEngineer ();
	pE2->printEngineer ();
	delete pE1, pE2;
	return 0;
}
