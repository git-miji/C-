#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, column;
    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    cout <<"Printing Number Pattern" << endl;
    cout <<"*************************" << endl;

    for (row=1; row<=n; row++)
    {

        //Printing Space
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }
        //Printing Number
        for (column=1; column<=2*row-1; column++)
        {
            cout << column;
        }

        cout <<endl;
    }

    cout <<"Printing Number Pattern" << endl;
    cout <<"*************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Space
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }

        //Printing Number
        for (column=1; column<=2*row-1; column++)
        {
            cout << row;
        }

        cout <<endl;
    }

    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    cout <<"Printing Symbolic Pattern" << endl;
    cout <<"*************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Space
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }

        //Printing Symbol
        for (column=1; column<=2*row-1; column++)
        {
            cout << "*";
        }

        cout <<endl;
    }
    for (row=1; row<=n; row++)
    {
        //Printing Space
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }

        //Printing Character
        for (column=1; column<=2*row-1; column++)
        {
            cout << "+";
        }

        cout <<endl;
    }

    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    cout <<"Printing Character Pattern" << endl;
    cout <<"**************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Space
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }

        //Printing Character
        for (column=1; column<=2*row-1; column++)
        {
            cout << char (column+64);
        }

        cout <<endl;
    }
    for (row=1; row<=n; row++)
    {
        //Printing Space
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }

        //Printing Character
        for (column=1; column<=2*row-1; column++)
        {
            cout << char (row+64);
        }

        cout <<endl;
    }

    getch();
}
