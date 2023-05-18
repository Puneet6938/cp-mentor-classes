#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,b,i,a,j,y,p,s,d;
    vector<vector<int>> v;
    vector<vector<int>> q;
    
    cin>>t;
    cin>>y;

    for(i=0;i<t;i++){
        cin>>a;
        vector<int> temp;
        for(int j=0;j<a;j++){
            cin>>b;
            temp.push_back(b);
        }
        v.push_back(temp);
    }

    for(p=0;p<t;p++){
        
        vector<int> tempo;
        for( s=0;s<y;s++){
            cin>>b;
            tempo.push_back(b);
        }
         cout<<v[p][b]<<endl;
        q.push_back(tempo);
         
    }
     
    return 0;
}
