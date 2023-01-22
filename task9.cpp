#include <iostream>
using namespace std;
float calculate(float money, int year);
main()
{
    float money;
    int year;
    cout << "enter your inheirted moneny:";
    cin >> money;
    cout << "enter years you want to live :";
    cin >> year;
    float remaining = calculate(money, year);
    if (remaining > 0)
    {
        cout << "yes! e will have carefree life " << remaining << " dollars left";
    }
    else
    {

        cout << "no! he will need " << -1 * remaining;
    }
}
float calculate(float money, int year)
{
    int age = 18;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            money = money - 12000;
        }
        else
        {

            money = money - (12000 + (50 * age));
        }
        age = age + 1;
    }

    return money;
}