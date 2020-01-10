#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
do{
	b=a%10;
	a=a/10;
	c=c*10+b;
} while(a);
cout<<c;
}
