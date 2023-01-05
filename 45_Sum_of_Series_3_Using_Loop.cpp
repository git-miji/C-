#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //Calculate the sum of series 1 + 1/2 + 1/3 + ..... + 1/n.
    double i, n, m, sum = 0;
    cout << "Enter the Last Number: ";
    cin >> n;
    cout << endl;

    cout << "Sum of Series Using For Loop" <<endl;
    cout << "****************************" << endl;

    for (i=1; i<=n; i++)
    {
        sum = sum + (1/i);
    }
    cout << "Sum of Series 1 + 1/2 + 1/3 + ..... + 1/" << n << " is = " << sum;
    cout << endl << endl;

    cout << "Sum of Series Using while Loop" <<endl;
    cout << "******************************" << endl;
    i = 1;
    sum = 0;
    while (i<=n)
    {
        sum = sum + (1/i);
        i++;
    }
    cout << "Sum of Series 1 + 1/2 + 1/3 + ..... + 1/" << n << " is = " << sum << endl;
    cout << endl;
    cout << "Sum of Series Using do while Loop" <<endl;
    cout << "*********************************" << endl;
    i = 1;
    sum = 0;
    do
    {
        sum = sum + (1/i);
        i++;
    }
    while (i<=n);
    cout << "Sum of Series 1 + 1/2 + 1/3 + ..... + 1/" << n << " is = " << sum;
    getch();
}
