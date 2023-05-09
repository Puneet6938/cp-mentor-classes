#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c=0,d,n;
    
    cout<<"Enter N:";
    cin>>n;
    
    if(n==1 || n==0){
    	cout<<"0";
	}
	
	else if(n==2){
		cout<<"0,1";
	}
    
    else{
    	cout<<"0,1,";
    	
	
    for(int i=2;i<n;i++)
	{
    c = a+b;
	cout<<c<<",";
	
    a = b;
    b = c;}
     
    }
}
