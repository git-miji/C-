#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, row, column;

    cout << "Printing Capital Letter pattern" << endl;
    cout << "*******************************" << endl;

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << char(column+64);
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
            cout << " " << char(row+64);
        }

        cout << endl;
    }

    cout << "Printing Small Letter pattern" << endl;
    cout << "*****************************" << endl;

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << char(column+96);
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
            cout << " " << char(row+96);
        }

        cout << endl;
    }

    getch();
}
