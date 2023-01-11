#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
    cout<<"Printing Pattern with Number" << endl;
    cout<<"****************************" << endl;

    int n, row, column;
    cout<< "Enter the number of row: ";
    cin>> n;
    cout<< endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=n-row; column++)
        {
            cout << " ";
        }
        for (column=1; column<=row; column++)
        {
            cout <<column;
        }
        cout <<endl;
    }

    cout<<"Printing Pattern with Number" << endl;
    cout<<"****************************" << endl;

    cout<< "Enter the number of row: ";
    cin>> n;
    cout<< endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=n-row; column++)
        {
            cout << " ";
        }
        for (column=1; column<=row; column++)
        {
            cout <<row;
        }
        cout <<endl;
    }

    cout<<"Printing Pattern with Character" << endl;
    cout<<"*******************************" << endl;

    cout<< "Enter the number of row: ";
    cin>> n;
    cout<< endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=n-row; column++)
        {
            cout << " ";
        }
        for (column=1; column<=row; column++)
        {
            cout <<char (column+64);
        }
        cout <<endl;
    }

    getch();
}
