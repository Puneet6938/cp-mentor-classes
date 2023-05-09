// WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the formula C/5=(F-
// 32)/9.

#include<bits/stdc++.h>
using namespace std;

int main()
{
float temp;
cout<<"Enter temperature in Celsius:";
cin>>temp;

cout<<"Temperature in fahrenheit = "<<(9*temp/5+32)<<endl;

}