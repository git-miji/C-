#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{

     /*
Formatting output in C++, is important in the development of the output screen, which can be easily read
and understood. C++ offers the programmer several input/output manipulators. Two of these (widely used) I/O manipulators are:
01. showpoint(): The showpoint function is a manipulator that sets the showpoint flag, which tells an output stream to write
    a decimal point for floating-point output, even if the point is unnecessary (only zeros appear after the decimal point).

    Syntax of showpoint() C++:
    ios_base& showpoint (ios_base& str)
    cout << showpoint;
    cout << showpoint << variable_name or number;
    Parameters: This method accepts str as a parameter which is the stream for which the format flag is affected.
    Return Value: This method returns the stream str with showpoint format flag set.

02. noshowpoint(): The noshowpoint() method of stream manipulators in C++ is used to clear the showpoint format flag for the
    specified str stream. This flag displays the floating values in decimal only when they have a decimal values.

    Syntax of noshowpoint() C++:
    ios_base& noshowpoint (ios_base& str)
    cout << noshowpoint;
    cout << noshowpoint << variable_name or number;
    Parameters: This method accepts str as a parameter which is the stream for which the format flag is to be cleared.
    Return Value: This method returns the stream str with noshowpoint format flag set.

03. fixed(): The fixed() method of stream manipulators in C++ is used to set the floatfield format flag for the specified str
    stream. This flag sets the floatfield to fixed. It means that the floating-point values will be written in fixed point notations.

    Syntax of fixed() C++:
    cout << fixed;
    ios_base& fixed (ios_base& str)
    Parameters: This method accepts str as a parameter which is the stream for which the format flag is affected.
    Return Value: This method returns the stream str with internal format flag set.

04. setw(): setw function is a C++ manipulator which stands for set width. The manipulator sets the ios library field width or
    specifies the minimum number of character positions a variable will consume. In simple terms, the setw C++ function helps set
    the field width used for output operations.

    Syntax of setw C++:
    The syntax of the function is:
    setw(int number)
    where number is the number of characters to be set as the field width.
    The setw C++ function is used with an expression generally. The output can be set using out<<setw(num), and input can be taken by
    using in>>setw(num).

05. setprecision(): In order to use these manipulators, you must include the header file named iomanip.h. Here is an example, showing
    how to include this header file in your C++ program.

    Syntax of setprecision() C++:
    setprecision(int n)
    Parameters: This method accepts n as a parameter which is the integer argument corresponding to which the floating-point precision is to be set.
    Return Value: This method does not return anything. It only acts as stream manipulators.
*/

    float a, b, sum, sub, p, q;


    cout << "Enter two number a and b: ";
    cin >> a >> b;
    cout << endl;

    sum = a + b; //adding two integer values
    sub = a - b; //Subtracting one integer from another integer
    p = a * b;   //Multiplying two integers
    q = a / b;   //Diving one integer with another integer


    //We want to show floating value
    cout << "showpoint" << endl;
    cout << showpoint;
    cout<< "Summation of numbers a and b is: " << sum << endl;
    cout<< "Subtraction of numbers a and b is: " << sub << endl;
    cout<< "Multiplication of number a and b is: " << p << endl;
    cout<< "Division of number a by b is: " << q << endl;
    cout << endl;

    //We want to show floating value
    cout << "showpoint" << endl;
    cout<< "Summation of numbers a and b is: " << showpoint << sum << endl;
    cout<< "Subtraction of numbers a and b is: " << showpoint << sub << endl;
    cout<< "Multiplication of number a and b is: " << showpoint << p << endl;
    cout<< "Division of number a by b is: " << showpoint << q << endl;
    cout << endl;

    //We do not wish to show floating values
    cout << "noshowpoint" << endl;
    cout << noshowpoint;
    cout<< "Summation of numbers a and b is: " << sum << endl;
    cout<< "Subtraction of numbers a and b is: " << sub << endl;
    cout<< "Multiplication of number a and b is: " << p << endl;
    cout<< "Division of number a by b is: " << q << endl;
    cout << endl;

    //We do not wish to show floating values
    cout << "noshowpoint" << endl;
    cout<< "Summation of numbers a and b is: " << noshowpoint << sum << endl;
    cout<< "Subtraction of numbers a and b is: " << noshowpoint << sub << endl;
    cout<< "Multiplication of number a and b is: " << noshowpoint << p << endl;
    cout<< "Division of number a by b is: " << noshowpoint << q << endl;
    cout << endl;

    // output will have total 10 digit in floating values
    cout << "setprecision()" << endl;
    cout  << setprecision(10);
    cout<< "Summation of numbers a and b is: "<< sum << endl;
    cout<< "Subtraction of numbers a and b is: " << sub << endl;
    cout<< "Multiplication of number a and b is: " << p << endl;
    cout<< "Division of number a by b is: " << q << endl;
    cout << endl;

    // output will have total 5 digit (Including floating values)
    cout << "fixed()" << endl;
    cout<< "Summation of numbers a and b is: " << fixed << setprecision(3)<< sum << endl;
    cout<< "Subtraction of numbers a and b is: " << fixed << setprecision(3) << sub << endl;
    cout<< "Multiplication of number a and b is: " << fixed << setprecision(3) << p << endl;
    cout<< "Division of number a by b is: " << fixed << setprecision(3) << q << endl;
    cout << endl;

    //Setting the length space before printing output of any operation
    cout << "setw()" << endl;
    cout << setw(40) << "Summation of numbers a and b is: " << sum << endl;
    cout << setw(40) << "Subtraction of numbers a and b is: " << sub << endl;
    cout << setw(40) << "Multiplication of number a and b is: " << p << endl;
    cout << setw(40) << "Division of number a by b is: " << q << endl;


    getch();
}
