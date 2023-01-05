<<<<<<< HEAD
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

/*
The text of a C++ program consists of tokens and white space.
A token is the smallest element of a C++ program that is meaningful
to the compiler. The C++ parser recognizes these kinds of tokens:

Keywords
Identifiers
Numeric, Boolean and Pointer Literals
String and Character Literals
User-Defined Literals
Operators
Punctuators

# Keywords can never be used as variable
# Each letter of a keyword must be lowercase: Int (invalid), int (valid)
# When two keywords are used at a time, they must be separated by "space": longdoube(invalid), long double(valid)
# Keywords a single word, we cannot use space between the characters of a single keyword: i n t (invalid), int(valid)


Tokens are usually separated by white space, which can be one or more:

Blanks
Horizontal or vertical tabs
New lines
Form feeds
Comments

**********
Variable
**********

Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

******************************
Declaring (Creating) Variables
******************************
To create a variable, specify the type and assign it a value:
data_type variableName = value;

*************************************
Rules for declaring Variables in C++
*************************************
A variable name can consist of Capital letters A-Z, lowercase letters a-z digits 0-9, and the underscore character.
The first character must be a letter or underscore.
Blank spaces cannot be used in variable names.
Special characters like # and $ are not allowed.
C++ keywords cannot be used as variable names.
Variable names are case-sensitive.
A variable name can consist of 31 characters only if we declare a variable more than one character compiler will ignore after 31 characters.
Variable type can be bool, char, int, float, double, void, or wchar_t.

*/

    int x, y; // data type is integer, variable name are x, y, this is variable declaration.
    x = 10; // assigned value to variable x, it's called variable initialization.
    y = 15; // assigned value to variable y, it's called variable initialization.
    int addition;
    addition = x + y;
    cout << "Sum of x and y is: " <<addition << endl;
    int p=5, q=6; // This is called dynamic initialization.
    cout << "Variable p is: " << p <<endl <<"Variable q is: " << q << endl;
    // Declaring char data type
    char ch;
    ch = 'F';
    cout << "The character variable is: " << ch << endl;

    // Declaring float data type
    float a;
    a = 10.501;
    cout << "The float variable is: " << a;


    getch();
}
=======
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

/*
The text of a C++ program consists of tokens and white space.
A token is the smallest element of a C++ program that is meaningful
to the compiler. The C++ parser recognizes these kinds of tokens:

Keywords
Identifiers
Numeric, Boolean and Pointer Literals
String and Character Literals
User-Defined Literals
Operators
Punctuators

# Keywords can never be used as variable
# Each letter of a keyword must be lowercase: Int (invalid), int (valid)
# When two keywords are used at a time, they must be separated by "space": longdoube(invalid), long double(valid)
# Keywords a single word, we cannot use space between the characters of a single keyword: i n t (invalid), int(valid)


Tokens are usually separated by white space, which can be one or more:

Blanks
Horizontal or vertical tabs
New lines
Form feeds
Comments

**********
Variable
**********

Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

******************************
Declaring (Creating) Variables
******************************
To create a variable, specify the type and assign it a value:
data_type variableName = value;

*************************************
Rules for declaring Variables in C++
*************************************
A variable name can consist of Capital letters A-Z, lowercase letters a-z digits 0-9, and the underscore character.
The first character must be a letter or underscore.
Blank spaces cannot be used in variable names.
Special characters like # and $ are not allowed.
C++ keywords cannot be used as variable names.
Variable names are case-sensitive.
A variable name can consist of 31 characters only if we declare a variable more than one character compiler will ignore after 31 characters.
Variable type can be bool, char, int, float, double, void, or wchar_t.

*/

    int x, y; // data type is integer, variable name are x, y, this is variable declaration.
    x = 10; // assigned value to variable x, it's called variable initialization.
    y = 15; // assigned value to variable y, it's called variable initialization.
    int addition;
    addition = x + y;
    cout << "Sum of x and y is: " <<addition << endl;
    int p=5, q=6; // This is called dynamic initialization.
    cout << "Variable p is: " << p <<endl <<"Variable q is: " << q << endl;
    // Declaring char data type
    char ch;
    ch = 'F';
    cout << "The character variable is: " << ch << endl;

    // Declaring float data type
    float a;
    a = 10.501;
    cout << "The float variable is: " << a;


    getch();
}
>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
