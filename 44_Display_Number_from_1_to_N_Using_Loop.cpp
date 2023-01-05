#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //Display all numbers between 1 and N.
    int i, n;
    cout << "Enter the Last Number: ";
    cin >> n;
    cout << endl;
    cout << "Displaying all numbers Using For Loop" <<endl;
    cout << "*************************************" << endl;
    cout << "All Numbers between 1 and " << n << " is: ";

    for (i=1; i<=n; i++)
    {
        cout << i <<",";
    }
    cout << endl << endl;

    cout << "Displaying all numbers Using While Loop" <<endl;
    cout << "***************************************" << endl;
    i = 1;
    cout << "All Numbers between 1 and " << n << " is: ";
    while (i<=n)
    {
        cout << i <<",";
        i++;
    }

    //Display Even Numbers between 1 and N.

    cout << endl << endl;

    cout << "Displaying Even Numbers Using for Loop" <<endl;
    cout << "****************************************" << endl;
    cout << "Even Numbers between 1 and " << n << " is: ";

    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            cout << i <<",";
        }
    }
    cout << endl << endl;

    cout << "Displaying Even Numbers Using while Loop" <<endl;
    cout << "****************************************" << endl;
    i = 1;
    cout << "Even Numbers between 1 and " << n << " is: ";
    while (i<=n)
    {
        if (i%2==0)
        {
            cout << i <<",";
        }
        i++;
    }

    //Display Odd Numbers between 1 and N.

    cout << endl << endl;

    cout << "Displaying Odd Numbers Using for Loop" <<endl;
    cout << "****************************************" << endl;
    cout << "Odd Numbers between 1 and " << n << " is: ";

    for (i=1; i<=n; i++)
    {
        if (i%2!=0)
        {
            cout << i <<",";
        }
    }
    cout << endl << endl;

    cout << "Displaying Odd Numbers Using while Loop" <<endl;
    cout << "****************************************" << endl;
    i = 1;
    cout << "Odd Numbers between 1 and " << n << " is: ";
    while (i<=n)
    {
        if (i%2!=0)
        {
            cout << i <<",";
        }
        i++;
    }

    getch();
}
