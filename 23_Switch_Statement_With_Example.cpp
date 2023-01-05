#include<iostream>
#include<conio.h>
using namespace std;

/*

Switch Statement
It is the statement that allows a variable to be tested against a list of values for equality. The value in the switch is termed as a case,
and hence the variable being switched on is checked against the case.

The switch statement in C++ is the best alternative to the lengthy if statements that are used to compare a variable to different integral
values. It is a multi-way branch statement. The switch statement is the control statement that allows any value to change the control of the
execution. The dispatch of execution to different parts of the code is accessible using the C++ switch.

The expression in the switch statement of C++ is valid only if it results in a constant value. The duplicate case values are not allowed in a
switch statement. The nesting of switch statements is allowed in C++. There are options to switch inside the other statement.

There are two forms of switch statements. The switch statement in C++ is unstructured as compared to the structured switches in modern languages
like Pascal. In a structured switch statement, it takes one branch, the unstructured switch functions as the go-to type. The main keywords in
switch statements are the case, inspect, select, etc.

The switch statement in C++ improves the clarity in C++ programming and reduces the bulkiness of repetitive coding. It ensures easy compiler
optimization and quick execution.

C++ Switch Statement Syntax With Example
The switch statement that compares the expression’s value with every single case, for example, cases x and y is mentioned below.

Switch(expression)
{

Case x:
    //code block
    break;

case y:
    // code block
    break;

default;
    // code block
}

Break and Default Keywords in C++ Switch Statement:
The break keyword breaks C++ out of the switch block. It halts the execution of more codes in the program. It further stops the
case testing inside the block. The break keyword in the switch statement in C++ language ignores the execution of the pending codes
and saves time. The flow of the control jumps to the next line, following the switch statement on reaching a break keyword.

The default keyword in the switch statement in C++ language specifies some code to run in the situation of a no case match. It is used
as the last statement in the switch block to eliminate the break keyword. It must appear at the end of the switch statement.

*/


int main()
{
    //Digit Spelling Program

    int p;
    cout <<endl << "Enter any Integer ... " << endl;
    cin >> p;
    cout << endl;
    switch (p)
    {
    case 0:
        cout << "This is digit Zero!" << endl;
        break;
    case 1:
        cout << "This is digit One!" << endl;
        break;
    case 2:
        cout << "This is digit Two!" << endl;
        break;
    case 3:
        cout << "This is digit Three" << endl;
        break;
    case 4:
        cout << "This is digit Four!" << endl;
        break;
    case 5:
        cout << "This is digit Five!" << endl;
        break;
    case 6:
        cout << "This is digit Six!" << endl;
        break;
    case 7:
        cout << "This is digit Seven!" << endl;
        break;
    case 8:
        cout << "This is digit Eight!" << endl;
        break;
    case 9:
        cout << "This is digit Nine!" << endl;
        break;
    default:
        cout << "This is not a Digit at all!!!" << endl;
    }
    cout << "*****************************" << endl;
    // Vowel Consonant detection using Switch Statement
    char ch;
    cout << "Enter any alphabet please: " << endl;
    cin >> ch;
    ch = tolower(ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Your entered alphabet is Vowel!";
        break;
    default:
        cout << "Your entered alphabet is Consonant!";
    }
    getch();
}
