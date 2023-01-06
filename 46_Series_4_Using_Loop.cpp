#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "calculate the multiplication of numbers between 1 and N." <<endl;
    cout << "********************************************************" <<endl;

    double n, i, result=1;

    cout << "Enter the last number: ";
    cin >> n;
    cout << endl;

    for (i=1; i<=n; i++)
    {
        result = result*i;
    }
    cout  << "Using for Loop, Multiplication of 1 to " << n <<" is = " << result << endl;

    i = 1;
    result = 1;
    while (i<=n)
    {
        result = result*i;
        i++;
    }
    cout  << "Using while Loop, Multiplication of 1 to " << n <<" is = " << result << endl;

    i = 1;
    result = 1;
    do
    {
        result = result*i;
        i++;
    }
    while  (i<=n);
    cout  << "Using do while Loop, Multiplication of 1 to " << n <<" is = " << result << endl;

    getch();
}
