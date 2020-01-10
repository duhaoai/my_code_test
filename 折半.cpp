#include <iostream>
#include <cstring>
using namespace std;
static int n=0;
void search(int d,int b,int a[]){ 

 while(n<5){
 	if(a[d]==b)cout<<"yes";
 	else if(a[d]>=d) {n++;search(d/(2*n),b,a[10]);}
 	else {n++;search(d*1.5,b,a[10]);}
 } 
 if(d==0) cout<<"no";
  } 
int main()
{
	int a[]={1, 3, 5, 7, 9, 11, 13, 15,17, 19},b,x;
	cin>>b;
	int d=sizeof(a)/(sizeof(int)*(n+1));
	search(d,b,a[10]);} 
