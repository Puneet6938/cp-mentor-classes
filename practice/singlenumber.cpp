#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[1000],n,i,j,count,arr[1000],k;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    
    

   for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(ar[i]!=ar[j]){
              count++;
            }
            else{
                count=0+count;
            }
        }
        if(count==n-1){
            cout<<ar[i]<<" ";
        }
        }
    
    return 0;
}
