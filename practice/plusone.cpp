#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[1000000],n,i,b=0,sum=0,a;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    
    for(i=n-1;i>=0;i--,b++){
        
        a=ar[i]*pow(10,b);
        sum=sum+a;
        
    }
    sum=sum+1;
    cout<<sum<<endl;

}
