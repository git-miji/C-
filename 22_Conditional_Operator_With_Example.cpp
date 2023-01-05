<<<<<<< HEAD
#include<iostream>
#include<conio.h>
using namespace std;

/*
The conditional operator is kind of similar to the if-else statement as it does follow the same algorithm as of if-else statement
but the conditional operator takes less space and helps to write the if-else statements in the shortest way possible.

Syntax:

The conditional operator is of the form
variable = Expression1 ? Expression2 : Expression3

Or the syntax will also be in this form
variable = (condition) ? Expression2 : Expression3

Or syntax will also be in this form
(condition) ? (variable = Expression2) : (variable = Expression3)

It can be visualized into if-else statement as:

if(Expression1)
{
    variable = Expression2;
}
else
{
    variable = Expression3;
}
Since the Conditional Operator ‘?:’ takes three operands to work, hence they are also called ternary operators.

Here, Expression1 is the condition to be evaluated. If the condition(Expression1) is True then Expression2 will be executed and the result will be
returned. Otherwise, if the condition(Expression1) is false then Expression3 will be executed and the result will be returned.

*/


int main()
{
    //Finding Large Number
    int num1, num2;
    cout <<"Enter Two Integer ... " << endl;
    cin >> num1 >> num2;
    cout << endl;
    int max = (num1>num2) ? num1:num2;
    cout << "The Largest Number is: " << max << endl;

    //Finding Odd even using Conditional Operator
    int p;
    cout <<endl << "Enter any Integer ... " << endl;
    cin >> p;
    cout << endl;
    (p%2 ==0) ? cout << p << " is even" : cout << p << " is odd" << endl;




    getch();
}
=======
#include<iostream>
#include<conio.h>
using namespace std;

/*
The conditional operator is kind of similar to the if-else statement as it does follow the same algorithm as of if-else statement
but the conditional operator takes less space and helps to write the if-else statements in the shortest way possible.

Syntax:

The conditional operator is of the form
variable = Expression1 ? Expression2 : Expression3

Or the syntax will also be in this form
variable = (condition) ? Expression2 : Expression3

Or syntax will also be in this form
(condition) ? (variable = Expression2) : (variable = Expression3)

It can be visualized into if-else statement as:

if(Expression1)
{
    variable = Expression2;
}
else
{
    variable = Expression3;
}
Since the Conditional Operator ‘?:’ takes three operands to work, hence they are also called ternary operators.

Here, Expression1 is the condition to be evaluated. If the condition(Expression1) is True then Expression2 will be executed and the result will be
returned. Otherwise, if the condition(Expression1) is false then Expression3 will be executed and the result will be returned.

*/


int main()
{
    //Finding Large Number
    int num1, num2;
    cout <<"Enter Two Integer ... " << endl;
    cin >> num1 >> num2;
    cout << endl;
    int max = (num1>num2) ? num1:num2;
    cout << "The Largest Number is: " << max << endl;

    //Finding Odd even using Conditional Operator
    int p;
    cout <<endl << "Enter any Integer ... " << endl;
    cin >> p;
    cout << endl;
    (p%2 ==0) ? cout << p << " is even" : cout << p << " is odd" << endl;




    getch();
}
>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
