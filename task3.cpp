#include<iostream>
using namespace std;
main()
{
    int num1,i=1;
    cout<<"eNTER NUMBER";
    cin>>num1;
    int counter=0;
    
    while(i>0)
    {
       num1 =num1/10;
       counter=counter +1;
        i++;
        if(num1==0)
        {
          i=0;
        }
    }
    cout<<counter;

}