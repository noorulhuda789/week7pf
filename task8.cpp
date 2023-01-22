#include<iostream>
using namespace std;
float calculate(int age,float price)
{
    float money1=0,toy=0,total,inc=10;
    for(int i=1;i<=age;i++)
    {
        
        if(i%2==0)
        {
           money1=(money1+inc)-1;
           inc=inc+10;
        }
        else
        {
          toy=toy +price; 
        }
    }
    return total=toy+money1;

}
main()
{
    float money,price;
    int age;
    cout<<"enter your age :";
    cin>>age;
    cout<<"enter price of machine :";
    cin>>money;
    cout<<"enter price of unit toy :";
    cin>>price;
    float final=calculate(age,price);
    if(final>money)
    {
        float total1=final-money;
        cout<<"yes!"<<endl;
        cout<<total1<<"left";
    }
    else
    {
        float total1=money-final;
        cout<<"No!" <<endl;
        cout<<total1;
        
    }
}