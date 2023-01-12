#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, column;
    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    cout <<"Printing Character Pattern" << endl;
    cout <<"**************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Character
        for (column=1; column<=n; column++)
        {
            cout <<"A ";
        }
        cout <<endl;
    }

    cout <<"Printing Symbolic Pattern" << endl;
    cout <<"*************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Symbol
        for (column=1; column<=n; column++)
        {
            cout <<"* ";
        }
        cout <<endl;
    }

    cout <<"Printing Number Pattern" << endl;
    cout <<"***********************" << endl;

    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Number
        for (column=1; column<=n; column++)
        {
            cout <<" "<<column;
        }
        cout <<endl;
    }

    cout <<"Printing Number Pattern" << endl;
    cout <<"***********************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Number
        for (column=1; column<=n; column++)
        {
            cout <<" "<<row;
        }
        cout <<endl;
    }

    cout <<"Printing Number Pattern" << endl;
    cout <<"***********************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Number
        for (column=1; column<=n; column++)
        {
            cout <<" "<<column%2;
        }
        cout <<endl;
    }

    getch();
}

