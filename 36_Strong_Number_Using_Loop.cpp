#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Given a number N, print all the Strong Numbers less than or equal to N.

Strong number is a special number whose sum of the factorial of digits is equal to the original number.
For Example: 145 is strong number. Since, 1! + 4! + 5! = 145.

*/
    int number, rem, temp, i, factorial, sum = 0;
    cout << "Enter any positive number: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Checking a given number whether it is Strong Number or Not using while loop" << endl;
    cout << "***************************************************************************" << endl;

    while (temp !=0)
    {
        rem = temp % 10;
        factorial = 1;
        for (i = 1; i <= rem; i++)
        {
            factorial = factorial*i;
        }
        sum = sum + factorial;
        temp = temp / 10;
    }

    if (number == sum)
    {
        cout << "Your entered number is an Strong Number!!!";
    }
    else
    {
        cout << "Your entered number " <<number << " is not an Strong Number!!!";
    }
    getch();
}
