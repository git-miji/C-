#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

/*
Assignment Operators
Assignment operators are used to assign values to variables.
we use the assignment operator (=) to assign the value 10 to a variable called x. x = 10.

Assign Operator         Example             Full meaning
    =                   y = x + 5;
    +=                    x += 5;             x = x + 5;
    -=                    x -= 5;             x = x - 5;
    *=                    x *= 5;             x = x * 5;
    /=                    x /= 5;             x = x / 5;
    %=                    x %= 5;             x = x % 5;
*/

    int x, y;

    x = 10;
    y = x + 5;
    cout << "The assigned value of y is: " << y << endl;

    //Use of += assign operator
    x += 10;
    cout << "The value of x after x += 10 assign operation is: " << x << endl;

    //Use of -= assign operator
    x -= 5;
    cout << "The value of x after x -= 5 assign operation is: " << x << endl;

    //Use of *= assign operator
    x *= 2;
    cout << "The value of x after x *= 2 assign operation is: " << x << endl;

    //Use of += assign operator
    x /= 2;
    cout << "The value of x after x /= 2 assign operation is: " << x << endl;

    //Use of += assign operator
    x %= 10;
    cout << "The value of x after x %= 10 assign operation is: " << x << endl;


/*
Unary Operator: Unary operators are the operators that operate on a single operand to produce a specific value. Unary operators in C++ include
following operators.

Unary Operator      Meaning
    +               Unary plus
    -               Unary minus
    ++              Increment
    --              Decrement

Increment Operator
The symbol ++ denotes the increment operator. It always increases the value by 1. It can be used both as a pre-increment and a post-increment operator.

The prefix increment operator is represented as ++x. In this operator, the value of the operand will be altered (increased by 1) before it is used.
The postfix increment operator is represented as x++. In this operator, the value of the operand will be altered (increased by 1) after it is used.

Decrement Operator
The symbol -- denotes the decrement operator. It always decreases the value by 1. It can be used both as a pre-decrement and a post-decrement operator.

The prefix decrement operator is represented as --x. In this operator, the value of the operand will be altered (decreased by 1) before it is used.
The postfix decrement operator is represented as x--. In this operator, the value of the operand will be altered (decreased by 1) after it is used.

*/
    cout << endl;
    cout << "Before running unary increment operator, the value of x is: " << x << endl << endl;;

    cout << "Prefix increment" << endl << endl;
    y = ++x; //Value of x will increase by 1 and will be assigned to y
    cout << "Value of y after prefix increment of x is: " << y << endl;
    cout << "Value of x after prefix increment of x is: " << x << endl << endl;

    cout << "Postfix increment" << endl << endl;
    y = x++; //Value of x will increase by 1 and will be assigned to x if it encounter x again
    cout << "Value of y after postfix increment of x is: " << y << endl; // Will have same value of x
    cout << "Value of x after postfix increment of x is: " << x << endl << endl; //Encountered x again

    cout << "Before running unary decrement operator, the value of x is: " << x << endl << endl;

    cout << "Prefix decrement" << endl << endl;
    y = --x; //Value of x will decrease by 1 and will be assigned to y
    cout << "Value of y after prefix decrement of x is: " << y << endl;
    cout << "Value of x after prefix decrement of x is: " << x << endl << endl;

    cout << "Postfix decrement" << endl << endl;
    y = x--; //Value of x will decrease by 1 and will be assigned to x if it encounter x again
    cout << "Value of y after postfix decrement of x is: " << y << endl; // Will have same value of x
    cout << "Value of x after postfix decrement of x is: " << x << endl;//Encountered x again

    getch();
}

