// WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained
// by the student.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3,s4,s5;

    cout<<"Enter the marks of 5 subjects:";
    cin>>s1>>s2>>s3>>s4>>s5;

    cout<<"Sum = "<<s1+s2+s3+s4+s5<<endl;
    cout<<"Percentage = "<<(s1+s2+s3+s4+s5)/5<<"%"<<endl;
}