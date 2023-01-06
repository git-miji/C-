#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
First Lucas Numbers is 2 and Second Lucas Numbers is 1.
Lucas number patterns:  2, 1, 3, 4, 7, 11, 18, 29, 47, 76.....

Lucas Number = Sum of last two Lucas

*/
    cout << "Find the first N Lucas Numbers: " <<endl;
    cout << "************************************" <<endl;

    double n, counter = 0, L1 = 2, L2=1, Lucas;

    cout << "Enter the last number: ";
    cin >> n;
    cout << endl;

    cout << "Using for loop, First " << n << " Lucas Numbers are: ";
    for (counter=0; counter <n; counter++)
    {
        if (counter==0)
        {
            cout << L1 <<", ";
        }
        else if (counter ==1)
        {
            cout <<L2 <<", ";
        }
        else
        {
            Lucas = L1 + L2;
            L1 = L2;
            L2 = Lucas;
            cout << Lucas << ", ";
        }
    }

    cout << endl;

    cout << "Using while loop, First " << n << " Lucas Numbers are: ";
    counter = 0;
    L1 = 2;
    L2 = 1;
    while (counter <n)
    {
        if (counter==0)
        {
            cout << L1 <<", ";
        }
        else if (counter ==1)
        {
            cout <<L2 <<", ";
        }
        else
        {
            Lucas = L1 + L2;
            L1 = L2;
            L2 = Lucas;
            cout << Lucas << ", ";
        }
        counter++;
    }

    cout << endl;

    cout << "Using do while loop, First " << n << " Lucas Numbers are: ";
     counter = 0;
    L1 = 2;
    L2 = 1;
    do
    {
        if (counter==0)
        {
            cout << L1 <<", ";
        }
        else if (counter ==1)
        {
            cout <<L2 <<", ";
        }
        else
        {
            Lucas = L1 + L2;
            L1 = L2;
            L2 = Lucas;
            cout << Lucas << ", ";
        }
        counter++;
    }
    while (counter <n);
    getch();
}
