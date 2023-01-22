#include<iostream>
using namespace std;
void multiplication(int number);
main()
{
 int number;
 cout<<"enter a number :";
 cin>>number;
 multiplication(number);
}
void multiplication(int number)
{
    int multi;
    for(int count=1 ;count<=10 ;count++)
    {
        multi=number*count;
        cout<<number <<"*" <<count <<"=" <<multi <<endl;
    }
}