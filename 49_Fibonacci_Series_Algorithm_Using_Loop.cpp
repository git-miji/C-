#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
First two Fibonacci Numbers are 0 and 1.
Fibonacci number patterns: 0, 1, 1, 2, 3, 5, 8, 13.....

Fibonacci Number = Sum of last two fibonacci

*/
    cout << "Find the first N Fibonacci Numbers: " <<endl;
    cout << "************************************" <<endl;

    int n, counter = 0, F1 = 0, F2=1, Fibo;

    cout << "Enter the last number: ";
    cin >> n;
    cout << endl;

    cout << "Using for loop, First " << n << " Fibonacci Numbers are: ";
    for (counter=0; counter <n; counter++)
    {
        if (counter<=1)
        {
            Fibo = counter;
            cout << Fibo <<", ";
        }
        else
        {
            Fibo = F1 + F2;
            F1 = F2;
            F2 = Fibo;
            cout << Fibo << ", ";
        }
    }

    cout << endl;

    cout << "Using while loop, First " << n << " Fibonacci Numbers are: ";
    counter = 0;
    F1 = 0;
    F2 = 1;
    while (counter <n)
    {
        if (counter<=1)
        {
            Fibo = counter;
            cout << Fibo <<", ";
        }
        else
        {
            Fibo = F1 + F2;
            F1 = F2;
            F2 = Fibo;
            cout << Fibo << ", ";
        }
        counter++;
    }

    cout << endl;

    cout << "Using do while loop, First " << n << " Fibonacci Numbers are: ";
    counter = 0;
    F1 = 0;
    F2 = 1;
    do
    {
        if (counter<=1)
        {
            Fibo = counter;
            cout << Fibo <<", ";
        }
        else
        {
            Fibo = F1 + F2;
            F1 = F2;
            F2 = Fibo;
            cout << Fibo << ", ";
        }
        counter++;
    }
    while (counter <n);
    getch();
}
