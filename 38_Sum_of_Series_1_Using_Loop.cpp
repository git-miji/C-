#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Find the sum of series:
1+2+3+........+n
*/

    int number, sum = 0;
    cout << "Enter the last number: ";
    cin >> number;
    cout << endl;

    cout << "Finding sum of 1+2+3+.....n using for loop" << endl;
    cout << "******************************************"<< endl;
    for (int i = 1; i<=number; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of Series 1+2+3+.....n is: " << sum << endl;

    getch();
}
