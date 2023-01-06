#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "calculate the multiplication below series: " <<endl;
    cout <<"1 - 2 + 3 - 4 + 5 - 6..................X N^2" <<endl;
    cout << "*******************************************" <<endl;

    int n, i, odd = 0, even = 0, result;

    cout << "Enter the last number: ";
    cin >> n;
    cout << endl;

    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
        result = odd - even;
    }
    cout  << "Using for Loop, sum of given series is: " << result << endl;

    i = 1;
    even = 0;
    odd = 0;
    result = 0;
    while (i<=n)
    {
        if (i%2==0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
        result = odd - even;
        i++;
    }
    cout  << "Using while Loop, sum of given series is: " << result << endl;

    i = 1;
    even = 0;
    odd = 0;
    result = 0;
    do
    {
        if (i%2==0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
        result = odd - even;
        i++;
    }
    while  (i<=n);
    cout  << "Using do while Loop, sum of given series is: " << result << endl;


    getch();
}

