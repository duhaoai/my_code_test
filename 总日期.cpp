#include <iostream>
using namespace std;
int main(){
	int year,mon,day,flag=1,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
	cin>>year>>mon>>day;
	if(year%4==0)flag=0;  
	   if(year%100==0)flag=1;
	   if(year%400==0)flag=0; 
	   for(int i=0;i<mon-1;i++)
	   sum+=a[i];
	   sum+=day;
	   if(flag==1) cout<<sum;goto l1;
	if(flag==0&&mon>=3) cout<<sum+1;
	   else cout<<sum; goto l1;
  l1:return 0;
} 
