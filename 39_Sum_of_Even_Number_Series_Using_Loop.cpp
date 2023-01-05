#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Find the sum of series:
2+4+6+........+n
*/
    int number, sum = 0;
    cout << "Enter the last number: ";
    cin >> number;
    cout << endl;

    cout << "Finding sum of 2+4+6+.....n using for loop" << endl;
    cout << "******************************************"<< endl;
    for (int i = 2; i<=number; i+=2)
    {
        sum = sum + i;
    }
    cout << "Sum of Series 2+4+6+.....n is: " << sum;
    getch();
}
