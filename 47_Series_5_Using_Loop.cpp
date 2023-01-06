#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "calculate the multiplication of odd numbers between 1 and N." <<endl;
    cout << "************************************************************" <<endl;

    double n, i, result=1;

    cout << "Enter the last number: ";
    cin >> n;
    cout << endl;

    for (i=1; i<=n; i=i+2)
    {
        result = result*i;
    }
    cout  << "Using for Loop, Multiplication of odd numbers between 1 to " << n <<" is = " << result << endl;

    i = 1;
    result = 1;
    while (i<=n)
    {
        result = result*i;
        i=i+2;
    }
    cout  << "Using while Loop, Multiplication of odd numbers between 1 to " << n <<" is = " << result << endl;

    i = 1;
    result = 1;
    do
    {
        result = result*i;
        i=i+2;
    }
    while  (i<=n);
    cout  << "Using do while Loop, Multiplication of odd numbers between 1 to " << n <<" is = " << result << endl << endl;


    cout << "calculate the multiplication of even numbers between 1 and N." <<endl;
    cout << "************************************************************" <<endl;

    result = 1;
    for (i=2; i<=n; i=i+2)
    {
        result = result*i;
    }
    cout  << "Using for Loop, Multiplication of even numbers between 1 to " << n <<" is = " << result << endl;

    i = 2;
    result = 1;
    while (i<=n)
    {
        result = result*i;
        i=i+2;
    }
    cout  << "Using while Loop, Multiplication of even numbers between 1 to " << n <<" is = " << result << endl;

    i = 2;
    result = 1;
    do
    {
        result = result*i;
        i=i+2;
    }
    while  (i<=n);
    cout  << "Using do while Loop, Multiplication of even numbers between 1 to " << n <<" is = " << result << endl;

    getch();
}
