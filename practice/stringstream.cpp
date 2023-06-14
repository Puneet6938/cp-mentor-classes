#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> vec;
   int nums;
   char ch;
   string str;

   cin>>str;
   stringstream ss(str);

   while(ss >> nums){
     vec.push_back(nums);
     ss >> ch;
   }
   
   for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<endl;
   }
}
