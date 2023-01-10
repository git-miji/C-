#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
    cout<<"Printing Pattern with Digits" << endl;
    cout<<"****************************" << endl;

    int n, row, column;
    cout<< "Enter the number of row: ";
    cin>> n;
    cout<< endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " <<column;
        }
        cout <<endl;
    }

    for (row=n-1; row>0; row--)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " <<column;
        }
        cout <<endl;
    }

    cout<<"Printing Pattern with Digits" << endl;
    cout<<"****************************" << endl;

    cout<< "Enter the number of row: ";
    cin>> n;
    cout<< endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " <<row;
        }
        cout <<endl;
    }

    for (row=n-1; row>0; row--)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " <<row;
        }
        cout <<endl;
    }
    getch();

}
