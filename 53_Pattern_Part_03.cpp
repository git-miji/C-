#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, row, column;

    cout << "Printing Star pattern" << endl;
    cout << "*********************" << endl;

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << " * ";
        }

        cout << endl;
    }

    cout << "Printing line pattern" << endl;
    cout << "*********************" << endl;

    cout << "Enter the number of lines: ";
    cin >> n;
    cout << endl;
    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            cout << " " << " - ";
        }

        cout << endl;
    }
    getch();
}
