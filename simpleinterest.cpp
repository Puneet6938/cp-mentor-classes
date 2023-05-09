// WAP that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate
// of Interest and Time are entered through the keyboard.

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    float p,r,t;

    cout<<"Enter Principle Amount,Rate,time:";
    cin>>p>>r>>t;

    cout<<"Simple Interest="<<(p*r*t)/100<<endl;
    cout<<"Compound Interest="<<p*pow((1+r/100),t) - p<<endl;
}