#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << endl << "Multiplication Table Using for Loop" << endl;
    cout << "*******************************************" << endl;
    int p, i;
    cout << "Enter the number you want to see the Multiplication Table: ";
    cin >> p;
    cout << endl;

    for (i = 1; i <= 10; i++)
    {
        cout << p << "X" << i << " = " << p * i << endl;
    }
    cout << endl << "Multiplication Table Using while Loop" << endl;
    cout << "*********************************************" << endl;

    int q, j;
    cout << "Enter the number you want to see the Multiplication Table: ";
    cin >> q;
    cout << endl;
    j = 1;
    while (j<=10)
    {
        cout << q << "X" << j << " = " << q * j << endl;
        j++;
    }

    cout << endl << "Multiplication Table Using while Loop" << endl;
    cout << "*********************************************" << endl;

    int r, k;
    cout << "Enter the number you want to see the Multiplication Table: ";
    cin >> r;
    cout << endl;
    k = 1;
    do
    {
        cout << r << "X" << k << " = " << r * k << endl;
        k++;
    }
    while (k<=10);
    getch();
}
