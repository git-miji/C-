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
    cout <<"***********************" << endl;

    for (row=n; row>0; row--)
    {
        //Printing Space
        for (column=1; column<=n-row; column++)
        {
            cout <<" ";
        }
        // Printing Number
        for (column=1; column<=row; column++)
        {
            cout <<column;
        }
        cout <<endl;

    }

    cout << endl;
    cout <<"Printing Number Pattern" << endl;
    cout <<"***********************" << endl;

    for (row=n; row>0; row--)
    {
        //Printing Space
        for (column=1; column<=n-row; column++)
        {
            cout <<" ";
        }
        // Printing Number
        for (column=1; column<=row; column++)
        {
            cout <<row;
        }
        cout <<endl;

    }

    cout << endl;
    cout <<"Printing Number Pattern" << endl;
    cout <<"***********************" << endl;

    for (row=n; row>0; row--)
    {
        //Printing Space
        for (column=1; column<=n-row; column++)
        {
            cout <<" ";
        }
        // Printing Number
        for (column=1; column<=row; column++)
        {
            cout <<column % 2;
        }
        cout <<endl;

    }


    getch();
}

