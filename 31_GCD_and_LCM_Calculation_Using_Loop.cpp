#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int p, q, rem, GCD, LCM;
    cout << "Enter two number: ";
    cin >> p >> q;
    cout << endl;
    int n1 = p;
    int n2 = q;

    cout << "GCD and LCM Calculation using while loop" << endl;
    cout << "*******************************************" << endl;
    while (n2 !=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    GCD = n1;
    LCM = (p * q) / GCD;
    cout << "GCD of Number " << p << " and " << q << " is " << GCD << endl;
    cout << "LCM of Number " << p << " and " << q << " is " << LCM << endl;
    getch();
}
