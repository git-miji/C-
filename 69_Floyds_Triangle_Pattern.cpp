#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, column, counter=0;
    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    cout <<"Printing Floyd's Star Pattern" << endl;
    cout <<"*****************************" << endl;
/*

The Floyd's triangle is a right-angled triangle that contains consecutive natural numbers. In Floyd's triangle,
the number starts with 1 in the top left corner, and then it consecutive filling the defined rows through the numbers.

*/
    for (row=1; row<=n; row++)
    {
        for (column=1; column<=row; column++)
        {
            counter ++;
            cout << counter <<" ";
        }
        cout << endl;
    }
    getch();
}
