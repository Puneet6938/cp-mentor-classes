#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,temp;
    vector<int> v;
    
    for(i=0;i<10;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

    for(i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
