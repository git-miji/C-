#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
/*
Find the sum of series:
1*2 + 2*3 + 3*4 +........+n1*n2
*/
    double p, q, i=1, j=2, sum = 0;
    cout << "Enter the last number for first series: ";
    cin >> p;
    cout << endl;

    cout << "Enter the last number for second series: ";
    cin >> q;
    cout << endl;

    cout << "Finding sum of 1*2 + 2*3 + 3*4 +........+n1*n2 using while loop" << endl;
    cout << "********************************************************************"<< endl;
    while (i <= p && j<=q)
    {
        sum = sum + i * j;
        i++;
        j++;
    }
    cout << "Sum of Series 1*2 + 2*3 + 3*4 +........+" << p << "*" << q << " is = " << sum;
    cout << endl << endl;
/*
Find the sum of series:
1*3*5 + 3*5*7 + 5*7*9 +........+n1*n2*n3
*/
    double l, m, n, a=1, b=3, c=5;
    sum = 0;
    cout << "Enter the last number for first series: ";
    cin >> l;
    cout << endl;

    cout << "Enter the last number for second series: ";
    cin >> m;
    cout << endl;

    cout << "Enter the last number for third series: ";
    cin >> n;
    cout << endl;

    cout << "Finding sum of 1*3*5 + 3*5*7 + 5*7*9 +........+n1*n2*n3 using while loop" << endl;
    cout << "********************************************************************"<< endl;
    while (a <= l && b<=m && c <=n)
    {
        sum = sum + a * b * c;
        a = a + 2;
        b = b + 2;
        c = c + 2;
    }
    cout << "Sum of Series 1*3*5 + 3*5*7 + 5*7*9 +........+" << l << "*" << m << "*" << n << " is = " << sum;

    getch();
}
