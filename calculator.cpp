// WAP that takes two operands and one operator from the user and perform the operation and prints the result
// by using Switch statement.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char ch;

    cout<<"Enter the Operands:";
    cin>>a>>b;

    cout<<"Enter the Operator:";
    // cout<<"1. Addition"<<endl<<"2. Subtract"<<endl<<"3. Product"<<endl<<"4. Division"<<endl;
    cin>>ch;
    switch (ch){
        case '+' :
        cout<<"Sum="<<a+b;
        break;
          case '-' :
        cout<<"Difference="<<a-b;
        break;
          case '*' :
        cout<<"Product="<<a*b;
        break;
          case '/' :
        cout<<"Division="<<a/b;
        break;
          case '%' :
        cout<<"Modulus="<<a%b;
        break;
    }
}