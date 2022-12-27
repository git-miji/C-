#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //Finding the leap year
    // If a year is divisible by 4 then it's a leap year.

    int year;
    cout << "Enter Your Desired Year: " <<endl;
    cin >> year;
    cout << endl;

    if (year % 4 == 0)
    {
        cout << year << " is Leap Year!!!";
    }
    else
    {
        cout << year << " is not Leap year! " <<endl;
    }
    getch();
}
