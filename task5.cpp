#include<iostream>
using namespace std;
int add(int num1);
main()
{
    int num1;
    cout<<"enter number you want :";
    cin>>num1;
    cout<<add(num1);
}
int add(int num1)
{
    int num3;
    int i;
    int counter=0 ;
       while(i>0)
    {   
         num3 =num1%10;
       num1 =num1/10;

       counter=counter +num3;
          
        i++;
        if(num1==0)
        {
          i=0;
        }
    }
    return counter;
}