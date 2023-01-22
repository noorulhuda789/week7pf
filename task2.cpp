#include<iostream>
using namespace std;
void fibonacci(int num1, int num2)
{
    int repeat,sum;
    cout<<"enter lenght you want : ";
    cin>>repeat;
    cout<<num1 <<"," <<num2;
    for(int count =1 ;count<=repeat-2 ;count++)
    {
      sum=num1+num2;
      cout<<"," <<sum;
      num1=num2;
      num2=sum;  
    }
}
main()
{
    int num1,num2;
    num1=0;
    num2=1;
    fibonacci(num1,num2);
}