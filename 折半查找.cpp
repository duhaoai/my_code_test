#include<iostream>
using namespace std; 
int BinSearch(int arr[],int len,int key)                       
{
	int low=0;                        
	int high=len-1;                 
	int mid;                          
	while(low<=high)
	{
		mid=(low+high)/2;             
		if(key==arr[mid])               
			return mid;    
		else if(key>arr[mid])           
			low=mid+1;
		else                                      
			high=mid-1;
	}
	return -1;                          
}
int main()
{int a; 
	int arr[]={ 1, 3, 5, 7, 9, 11, 13, 15,17, 19};
	cin>>a;                     
	a=BinSearch(arr,(sizeof(arr)/sizeof(arr[0])),a);
	if(a>=0)cout<<"yes";
	else cout<<"no";
	return 0;
}

