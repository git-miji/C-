<<<<<<< HEAD
#include <iostream>
#include<conio.h>
using namespace std;

/*
Logical Operators
As with comparison operators, you can also test for true or false values with logical operators.

Logical operators are used to determine the logic between variables or values:

Operator    	    Name	    Description                                         	    Example
   && 	        Logical and	    Returns true if both statements are true	                x < 5 &&  x < 10
   || 	        Logical or	    Returns true if one of the statements is true	            x < 5 || x < 4
    !	        Logical not	    Reverse the result, returns false if the result is true	!   (x < 5 && x < 10)
*/

int main()
{
    //Determining vowel and consonant using logical operator

    char ch;
    cout << "Enter any letter: ";
    cin >> ch;
    cout << endl;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "Your entered letter is Vowel!!!";
    }
    else
    {
        cout << "Your entered letter is Consonant!!!";
    }

    //Determining vowel and consonant using logical operator and tolower() function

    /*
    tolower() function converts the input character to lower case character.
    toupper() function converts the input character to upper case character.

    */

    char ch2;
    cout << endl<< "Enter any letter: ";
    cin >> ch2;
    ch2 = tolower(ch2);
    cout << endl;

    if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u')
    {
        cout << "Your entered letter is Vowel!!!";
    }
    else
    {
        cout << "Your entered letter is Consonant!!!";
    }

    getch();
}
=======
#include <iostream>
#include<conio.h>
using namespace std;

/*
Logical Operators
As with comparison operators, you can also test for true or false values with logical operators.

Logical operators are used to determine the logic between variables or values:

Operator    	    Name	    Description                                         	    Example
   && 	        Logical and	    Returns true if both statements are true	                x < 5 &&  x < 10
   || 	        Logical or	    Returns true if one of the statements is true	            x < 5 || x < 4
    !	        Logical not	    Reverse the result, returns false if the result is true	!   (x < 5 && x < 10)
*/

int main()
{
    //Determining vowel and consonant using logical operator

    char ch;
    cout << "Enter any letter: ";
    cin >> ch;
    cout << endl;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "Your entered letter is Vowel!!!";
    }
    else
    {
        cout << "Your entered letter is Consonant!!!";
    }

    //Determining vowel and consonant using logical operator and tolower() function

    /*
    tolower() function converts the input character to lower case character.
    toupper() function converts the input character to upper case character.

    */

    char ch2;
    cout << endl<< "Enter any letter: ";
    cin >> ch2;
    ch2 = tolower(ch2);
    cout << endl;

    if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u')
    {
        cout << "Your entered letter is Vowel!!!";
    }
    else
    {
        cout << "Your entered letter is Consonant!!!";
    }

    getch();
}
>>>>>>> 3e506be22e2522730be1330f87e17641d92262a3
