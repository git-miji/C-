<<<<<<< HEAD
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Bitwise Operator: In C++, bitwise operators perform operations on integer data at the individual bit-level. These operations include testing, setting,
or shifting the actual bits. For example,

a & b;
a | b;

Here is a list of 6 bitwise operators included in C++.

Operator            Meaning
   &                Bitwise AND
   |                Bitwise OR
   ^                Bitwise EXOR
   >>               Bitwise Shift Right
   <<               Bitwise Shift Left
   -                Bitwise NOT

*/
    cout << "Bitwise AND Operation" << endl << endl;
    int a, b, c;
    a = 20; // Binary will be 1 0 1 0 0
    b = 15; // Binary will be 0 1 1 1 1
    c = a & b; // Bitwise AND will result 1 0 0 which is equal to 4 in decimal.
    cout <<"The value of Bitwise AND operation between a and b is: " << c;

    cout << "Bitwise OR Operation" << endl << endl;
    c = a | b; // Bitwise AND will result 1 1 1 1 1 which is equal to 31 in decimal.
    cout <<"The value of Bitwise OR operation between a and b is: " << c;

    cout << "Bitwise EXOR Operation" << endl << endl;
    c = a ^ b; // Bitwise AND will result 1 1 0 1 1 which is equal to 27 in decimal.
    cout <<"The value of Bitwise EXOR operation between a and b is: " << c << endl << endl;

/*
Right Shift Operator: The right shift operator shifts all bits towards the right by a certain number of specified bits. It is denoted by >>.
When we shift any number to the right, the least significant bits are discarded, while the most significant bits are replaced by zeroes.

Left Shift Operator: The left shift operator shifts all bits towards the left by a certain number of specified bits. It is denoted by <<.
When we shift any number to the left, the left-most bit is discarded, while the right-most bit remains vacant. This vacancy is replaced by a 0.
    */
    c = a >> 2; // Binary value of a is 1 0 1 0 0. If we shift Most Significant Bit 2 place right, we get 1 0 1 which is equal to decimal 5.
    cout << "The value of c after right shift of a by 2 is: " << c << endl;
    c = a << 2; // Binary value of a is 1 0 1 0 0. If we shift Most Significant Bit 2 place right, we get 1 0 1 0 0 0 0 which is equal to decimal 80.
    cout << "The value of c after left shift of a by 2 is: " << c << endl;
    getch();
}

=======
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
Bitwise Operator: In C++, bitwise operators perform operations on integer data at the individual bit-level. These operations include testing, setting,
or shifting the actual bits. For example,

a & b;
a | b;

Here is a list of 6 bitwise operators included in C++.

Operator            Meaning
   &                Bitwise AND
   |                Bitwise OR
   ^                Bitwise EXOR
   >>               Bitwise Shift Right
   <<               Bitwise Shift Left
   -                Bitwise NOT

*/
    cout << "Bitwise AND Operation" << endl << endl;
    int a, b, c;
    a = 20; // Binary will be 1 0 1 0 0
    b = 15; // Binary will be 0 1 1 1 1
    c = a & b; // Bitwise AND will result 1 0 0 which is equal to 4 in decimal.
    cout <<"The value of Bitwise AND operation between a and b is: " << c;

    cout << "Bitwise OR Operation" << endl << endl;
    c = a | b; // Bitwise AND will result 1 1 1 1 1 which is equal to 31 in decimal.
    cout <<"The value of Bitwise OR operation between a and b is: " << c;

    cout << "Bitwise EXOR Operation" << endl << endl;
    c = a ^ b; // Bitwise AND will result 1 1 0 1 1 which is equal to 27 in decimal.
    cout <<"The value of Bitwise EXOR operation between a and b is: " << c << endl << endl;

/*
Right Shift Operator: The right shift operator shifts all bits towards the right by a certain number of specified bits. It is denoted by >>.
When we shift any number to the right, the least significant bits are discarded, while the most significant bits are replaced by zeroes.

Left Shift Operator: The left shift operator shifts all bits towards the left by a certain number of specified bits. It is denoted by <<.
When we shift any number to the left, the left-most bit is discarded, while the right-most bit remains vacant. This vacancy is replaced by a 0.
    */
    c = a >> 2; // Binary value of a is 1 0 1 0 0. If we shift Most Significant Bit 2 place right, we get 1 0 1 which is equal to decimal 5.
    cout << "The value of c after right shift of a by 2 is: " << c << endl;
    c = a << 2; // Binary value of a is 1 0 1 0 0. If we shift Most Significant Bit 2 place right, we get 1 0 1 0 0 0 0 which is equal to decimal 80.
    cout << "The value of c after left shift of a by 2 is: " << c << endl;
    getch();
}

>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
