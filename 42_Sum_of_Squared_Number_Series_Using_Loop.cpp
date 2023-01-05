#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
/*
Find the sum of series:
1^2 + 2^2 + 3^2 + 4^2 + 5^2 +........+n^2
*/
    double number, sum = 0; // data type should be float or double in this case
    cout << "Enter the last number: ";
    cin >> number;
    cout << endl;

    cout << "Finding sum of 1^2 + 2^2 + 3^2 + 4^2 + 5^2 +........+n^2 using for loop" << endl;
    cout << "***********************************************************************"<< endl;
    for (double i = 1; i<=number; i++)
    {
        sum = sum + pow(i, 2);
    }
    cout << "Sum of Series 1^2 + 2^2 + 3^2 + 4^2 + 5^2 +........+n^2 is = " << sum;
    getch();
}
