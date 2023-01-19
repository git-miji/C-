#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, column;
    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    cout <<"Printing Triangle Star Pattern" << endl;
    cout <<"******************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Star
        for (column=1; column<=n; column++)
        {
            if (row==n || column==1 || row==column)
            {
                cout <<" * ";
            }
        // Printing Space
            else
            {
                cout <<"   ";
            }
        }
        cout << endl;
    }
    getch();
}
