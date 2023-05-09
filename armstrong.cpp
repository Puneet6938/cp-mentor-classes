#include<iostream>
using namespace std;
int main()  

{  
    int num, count = 1, rem, sum;  
  
    while(0< count < 10)  
    {  
        num = count;  
        sum = 0;  
  
        while(num>0)  
        {  
            rem = num % 10;  
            sum = sum + rem ;  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            cout<<count<<","; 
        }  
  
        count++;  
    }  
    while(10 < count < 100)  
    {  
        num = count;  
        sum = 0;  
  
        while(num>0)  
        {  
            rem = num % 10;  
            sum = sum + (rem * rem );  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            cout<<count<<","; 
        }  
  
        count++;  
    }  
  
     return 0;  
}  
