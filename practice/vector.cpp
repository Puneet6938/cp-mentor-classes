#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;

    cin>>n;

    vector<vector<int>> vec;

    for(i=0;i<n;i++){
        
        int a;
        cin>>a;
        vector<int> temp;
        for(j=0;j<a;j++)
        {
            int b;
            cin>>b;
        
            temp.push_back(b);
        }
        vec.push_back(temp);
    }

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
