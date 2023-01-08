#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int p, i, Factorial = 1;
    cout << "Enter the number you want to calculate the factorial: ";
    cin >> p;
    cout << endl;

    cout << "Factorial Calculation using for loop" << endl;
    cout << "*******************************************" << endl;
    for (i = 1; i <= p; i++)
    {
        Factorial = Factorial * i;
    }
    cout << "Factorial of number " << p << " is " << Factorial << endl;
    cout << endl;

    cout << "Factorial Calculation using while loop" << endl;
    cout << "*******************************************" << endl;

    Factorial = 1;
    i = 1;
    while (i<=p)
    {
        Factorial = Factorial * i;
        i++;
    }
    cout << "Factorial of number " << p << " is " << Factorial << endl;
    cout << endl;

    cout << "Factorial Calculation using do while loop" << endl;
    cout << "*******************************************" << endl;
    Factorial = 1;
    i = 1;
    do
    {
        Factorial = Factorial * i;
        i++;
    }
    while (i<=p);
    cout << "Factorial of number " << p << " is " << Factorial << endl;

    getch();
}
