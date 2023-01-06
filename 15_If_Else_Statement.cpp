#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter any integer: " << endl;
    cin >> num;
    cout << endl <<endl;
// Using two if statement:

    if (num>0)
    {
        cout << "Your entered number is positive" << endl;
    }

    if (num<0)
    {
        cout << "Your entered number is negative" << endl;
    }

// Using else if statement:

    if (num>0)
    {
        cout << "Your entered number is positive" << endl;
    }
    else if (num<0)
    {
        cout << "Your entered number is negative" << endl;
    }

// Using if else statement:

    if (num>0)
    {
        cout << "Your entered number is positive" << endl;
    }
    else if (num<0)
    {
        cout << "Your entered number is negative" << endl;
    }
    else
    {
        cout << "Your entered value is zero.";
    }
    getch();
}
