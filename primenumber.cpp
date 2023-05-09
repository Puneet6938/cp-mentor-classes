#include<iostream>
using namespace std;
int main(){
    int i,n,count;
    
    cout<<"Enter Number:";
    cin>>n;
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
           count++;
        }
    }
        if(count==1)
          printf("prime number");
        else
         printf("not prime number");
}
