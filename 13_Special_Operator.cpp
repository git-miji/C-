#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
/*
The sizeof Operator: C++ provides the unary sizeof operator that allows you to find out how much space a data
type or a certain variable in your program is using.
There are four methods you can use with the sizeof operator: using the variable or the data type. The general
syntaxes of the sizeof operator are:

sizeof VariableName;
sizeof DataType;
sizeof(VariableName);
sizeof(DataType);

Any of these four formulas is admissible. But it is good to refrain from using the data type except in rare
cases that you can justify. The reason you should apply the sizeof operator on the variable is because, if
you change the variable (the word variable means it can change throughout the program), that is, if you perform
any operation on it, the sizeof operator will acknowledge that and render the right result. Some and most of the
time, if you apply the sizeof operator on the data type, you might end up with a bug; if you are lucky, the program
would simply not compile.

Another special operator is comma (,) operator. We will also look at it here. But we will look at special operator pointer (*) later.
*/
    cout << "Use of sizeof operator" << endl << endl;

    int a; //Integer data type takes 4 bytes in memory.
    float f; //Float data type takes 4 bytes in memory.
    double d; //Double data type takes 8 bytes in memory.
    char ch; //Character data type takes 1 bytes in memory.
    char name[21]; //Character array data type takes declared array length as bytes in memory.

    cout << "Size of integer a is: " << sizeof(a) << endl;
    cout << "Size of float f is: " << sizeof(f) << endl;
    cout << "Size of double d is: " << sizeof(d) << endl;
    cout << "Size of character ch is: " << sizeof(ch) << endl;
    cout << "Size of character array name[21] is: " << sizeof(name) << endl << endl;

    cout << "Use of comma(,) operator" << endl << endl;

/*
The purpose of comma operator is to string together several expressions. The value of a comma-separated list of expressions is
the value of the right-most expression. Essentially, the comma's effect is to cause a sequence of operations to be performed.

The values of the other expressions will be discarded. This means that the expression on the right side will become the value of
the entire comma-separated expression. For example −

var = (count = 19, incr = 10, count+1);
Here first assigns count the value 19, assigns incr the value 10, then adds 1 to count, and finally, assigns var the value of the
rightmost expression, count+1, which is 20. The parentheses are necessary because the comma operator has a lower precedence than the
assignment operator.
*/
    int p, q, sum;
    p = 10;
    q =20;
    sum = (p, q, sum = p + q);
    cout << "The value of sum is: " << sum << endl;
    getch ();
}
