#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Find the sum of series:
1.5+2.5+3.5+........+n
*/
    double number, sum = 0; // data type should be float or double in this case

    cout << "Enter the last number: ";
    cin >> number;
    cout << endl;

    cout << "Finding sum of 1.5+2.5+3.5+........+n using for loop" << endl;
    cout << "****************************************************"<< endl;
    for (double i = 1.5; i<=number; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of Series 1.5+2.5+3.5+........+n is: " << sum;
    getch();
}
