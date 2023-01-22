#include<iostream>
using namespace std;
int frequency(int num1,int num2);
main()
{
    int num1,num2;
    cout<<"enter number you want :";
    cin>>num1;

    cout<<"enter digit  you want to calculate ";
    cin>>num2;
    cout<<frequency(num1,num2);
}


    int frequency(int num1,int num2)
{
    int counter=0 ;
    int i=1,num3;
       while(i>0)
    {   
         num3 =num1%10;
       num1 =num1/10;
          if(num3==num2)
          {
       counter=counter +1;
          }
        i++;
        if(num1==0)
        {
          i=0;
        }
    }
    return counter;
}