// 1 G genreal
// 2  s sleeper
// 3  d 3rd ac
// 4  b 2nd ac
// 5  a 1st ac

#include <iostream>
using namespace std;

int main()
{
    int sum = 0,summ=0;
    int coach_code[] = {71, 83, 68, 66, 65};
    int coaches;
    cout << "enter number of coaches" << endl;
    cin >> coaches;
    if (coaches > 25)
    {
        return 0;
    }
    int number_of_coaches[5] = {};
    cout << "enter the number of coaches for each category" << endl;
    for (int i = 0; i < 5; i++)
    {

        cin >> number_of_coaches[i];

        if (number_of_coaches[i] <= 0)
        {
            number_of_coaches[i] = 1;
        }
        summ+=number_of_coaches[i];

    }
    if(summ!=coaches)
    {
        return 0;
    }

    int number_seats_in_each[5] = {};
    cout << "enter the number of seats for each category" << endl;
    for (int j = 0; j < 5; j++)
    {
        cin >> number_seats_in_each[j];
        if (number_seats_in_each[j] > 1000)
        {
            number_seats_in_each[j] = 1000;
        }
    }
    // price for each coach
    int price[5] = {};
    for (int k = 0; k < 5; k++)
    {
        price[k] = (number_seats_in_each[k] / number_of_coaches[k]) + (coach_code[k] / k + 1);
        cout << "price for each coach " << price[k] << endl;
        sum += price[k];
    }
    cout << "the maximum amount collected " << sum << endl;

    return 0;
}