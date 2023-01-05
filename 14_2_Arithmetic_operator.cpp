#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
/*

What is operation in C++?
An operation is an action performed on one or more values either to modify the value held by
one or both of the variables or to produce a new value by combining variables. Therefore, an
operation is performed using at least one symbol and one value. The symbol used in an operation
is called an operator.

What is operand in C++?

A variable or a value involved in an operation is called an operand.
A unary operator is an operator that performs its operation on only one operand.
An operator is referred to as binary if it operates on two operands.

Arithmetic Operators: Arithmetic operators are used to perform common mathematical operations.

Operator	Name	            Description	                            Example
+	        Addition	        Adds together two values        	    x + y
-	        Subtraction	        Subtracts one value from another	    x - y
*	        Multiplication	    Multiplies two values           	    x * y
/	        Division	        Divides one value by another       	    x / y
%	        Modulus	            Returns the division remainder  	    x % y
++	        Increment	        Increases the value of a variable by 1	++x
--	        Decrement	        Decreases the value of a variable by 1	--x
The + operator is often used to add together two values, it can also be used to add together a
variable and a value, or a variable and another variable as well.

C++ Operators:
Operators are used to perform operations on variables and values.
C++ divides the operators into the following groups:

Arithmetic operators
Assignment operators
Comparison operators
Logical operators
Bitwise operators

What is expression?

Expressions are sequences of operators and operands that are used for one or more of these purposes:
01. Computing a value from the operands.
02. Designating objects or functions.
03. Generating "side effects." (Side effects are any actions other than the evaluation of the expression — for example,
    modifying the value of an object.)

*/
    int a, b, sum, sub, p, q, r;


    cout << "Enter integer value of a: ";
    cin >> a;
    cout  << endl;

    cout << "Enter integer value of b: ";
    cin >> b;
    cout << endl;


    sum = a + b; //adding two integer values
    cout<< "Summation of numbers a and b is: " << sum << endl;

    sub = a - b; //Subtracting one integer from another integer
    cout<< "Subtraction of numbers a and b is: " << sub << endl;

    p = a * b;   //Multiplying two integers
    cout<< "Multiplication of number a and b is: " << p << endl;

    q = a / b;   //Diving one integer with another integer
    cout<< "Division of number a by b is: " << q << endl;

    r = a % b;   //Calculating the reminder of division
    cout<< "Reminder of division of number a by b is: " << r << endl;

    cout << "Memory location of a is: " << &a << endl;

    getch();
}
