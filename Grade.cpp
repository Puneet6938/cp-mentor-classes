// WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained
// by the student.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3,s4,s5,f;

    cout<<"Enter the marks of 5 subjects:";
    cin>>s1>>s2>>s3>>s4>>s5;

    cout<<"Sum = "<<s1+s2+s3+s4+s5<<endl;
    f=(s1+s2+s3+s4+s5)/5;
    cout<<"Percentage = "<<f<<"%"<<endl;

    if(90<f && f<=100){
        cout<<"Grade A";
    }
    else if(80<f && f<=90){
         cout<<"Grade B";
    }
    else if(60<f && f<=80){
         cout<<"Grade C";
    }
     else {
         cout<<"Grade D";
    }
}