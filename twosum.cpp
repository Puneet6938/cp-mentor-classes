#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[2000],target,i,n;

    cout<<"Enter length of array: ";
    cin>>n;

    printf("Enter the array:");
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter target:";
    cin>>target;

    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]+ar[j]==target){
                cout<<i<<","<<j<<endl;
            }
        }
    }
  
}