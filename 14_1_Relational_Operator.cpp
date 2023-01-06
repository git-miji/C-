#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
The following table summarizes the relational operators used in C++.

Operator	Meaning	Example
==	        Is Equal To	3 == 5 gives us false
!=	        Not Equal To	3 != 5 gives us true
>	        Greater Than	3 > 5 gives us false
<	        Less Than	3 < 5 gives us true
>=	        Greater Than or Equal To	3 >= 5 give us false
<=	        Less Than or Equal To	3 <= 5 gives us true

*/
    cout << "Use of Relational operators" << endl << endl;

    int p, q;
    p = 10;
    q =20;
    cout << ((p == 10)) << endl; // p = 10, which is true, so we will get output 1.
    cout << ((q != 20)) << endl; // q = 20, which is true, but we are saying q is not equal to 20, so we will get output 0.
    cout << ((p > q)) << endl; // p is less than q, but we are saying q is greater than q, so we will get output 0.
    cout << ((q < p)) << endl; // q is greater than p and we are saying q is less than p, so we will get output 0.
    cout << ((p <= 10)) << endl; // p = 10, which is less than or equal to 10, and this expression is true, so we will get output 1.
    cout << ((q >= 10)) << endl; // q = 20, which is greater than or equal to 10, and this expression is true, so we will get output 1.

    getch ();
}
