#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*

*/
    int number, rem, temp, counter=0;
    cout << "Enter any integer: ";
    cin >> number;
    cout << endl;
    temp = number;

    cout << "Counting digits in a number using while loop" << endl;
    cout << "********************************************"<< endl;
    while (temp !=0)
    {
        temp = temp / 10;
        counter++;
    }
    cout << "Your entered number has " << counter <<" digits";
    getch();
}
