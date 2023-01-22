#include<iostream>
using namespace std;
 int gcd(int num1 ,int num2);
 int lcm(int num1,int num2,int high);
 int main()
{
    int num1,num2;
    cout<<"enter number ";
    cin>>num1;
    cout<<"enter  number";
    cin>>num2;
    int high= gcd(num1,num2);
    
    cout<<lcm(num1,num2,high);
}
 int gcd(int num1 ,int num2)
 {
   int gcd;
    if(num1>num2)
    {
        for (int i=1 ;i<=num2 ;i++)
        {
        if(num1%i==0 && num2%i==0 )
        {
            gcd=i;
        }
        }
    }
    else
    {
           for (int i=1 ;i<=num1 ;i++)
        {
        if(num1%i==0 && num2%i==0 )
        {
            gcd=i;
        }
        }

        
    }   


  return gcd;
}
int lcm(int num1,int num2,int high)
{
    return (num1*num2)/high;
}