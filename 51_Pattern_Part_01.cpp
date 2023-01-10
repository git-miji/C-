#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, row, column;

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << column;
        }

        cout << endl;
    }

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << row;
        }

        cout << endl;
    }


    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << row % 2;
        }

        cout << endl;
    }


    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << row / 2;
        }

        cout << endl;
    }


    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << row % 2 <<" " << row / 2;
        }

        cout << endl;
    }

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << column % 2;
        }

        cout << endl;
    }


    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << column / 2;
        }

        cout << endl;
    }

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << column % 2 <<" " << column / 2;
        }

        cout << endl;
    }

    getch();
}
