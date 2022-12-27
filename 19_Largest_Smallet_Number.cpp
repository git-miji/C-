#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    //Finding the largest number

    int p, q, r;
    cout << "Enter 3 Numbers: " <<endl;
    cin >> p >> q >> r;
    cout << endl;

    if (p > q && q > r)
    {
        cout << p << " is the largest number! " <<endl;
    }
    else if (q > p && q > r)
    {
        cout << q << " is the largest number! " <<endl;
    }
    else
    {
        cout << r << " is the largest number! " <<endl;
    }

    //Finding the Smallest number

    int a, b, c;
    cout << "Enter 3 Numbers: " <<endl;
    cin >> a >> b >> c;
    cout << endl;

    if (a < b && b < c)
    {
        cout << a << " is the smallest number! " <<endl;
    }
    else if (b < a && a < c)
    {
        cout << b << " is the smallest number! " <<endl;
    }
    else
    {
        cout << c << " is the smallest number! " <<endl;
    }
    getch();
}
