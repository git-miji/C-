#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Find the sum of series:
1+3+5+........+n
*/
    int number, sum = 0;
    cout << "Enter the last number: ";
    cin >> number;
    cout << endl;

    cout << "Finding sum of 1+3+5+.....n using for loop" << endl;
    cout << "******************************************"<< endl;
    for (int i = 1; i<=number; i+=2)
    {
        sum = sum + i;
    }
    cout << "Sum of Series 1+3+5+.....n is: " << sum;
    getch();
}
