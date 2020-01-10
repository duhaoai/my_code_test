#include <iostream>
using namespace std;
int a(int m, int n)  
{  
	if (m==1&& n==1) return 0;  
	if (m==1 && n==2) return 1;  
	if (m==2&& n==1) return 1;           
	if (m==1) return a(m, n-1);             
	if (n==1) return a(m-1, n);  
	else   
		return a(m-1,n)+a(m,n-1);  
} 
int main()
{int m,n;
	cin>>m>>n;
 cout<<a(m,n);
 } 
