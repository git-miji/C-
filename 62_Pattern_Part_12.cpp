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

    for (row=1; row<=n; row++)
    {
        //Printing Number
        for (column=1; column<=row; column++)
        {
            cout << row * column <<" ";
        }
        cout <<endl;
    }
    getch();
}

