#include <iostream>
using namespace std;
int main()
{     int n,i,h;
      char a;
      cout<<"please input a line: ";
      cin>>n;
      cout<<"please input a character";
      cin>>a;
      cout<<endl<<endl<<endl;
	      do {cout<<a;
	           i++;
	           cout<<" ";
	           i++;
	         }while(i<n);
	        cout<<endl;
	        h=0;
	       do{i=0;
	          cout<<a;
	           do{cout<<" ";
	               i++;
             	  }while (i<n-2);
	    cout<<a<<endl;
	     h++;
	         }while(h<n-2);
	       i=0;
	       do {cout<<a;
	       i++;
	       cout<<" ";
	       i++;
	      }while(i<n);
	      cout<<endl;
}
