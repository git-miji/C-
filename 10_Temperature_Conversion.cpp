#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int user_input;
    float fernheit, celsius;

    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> user_input;
    cout << endl;

    if (user_input == 1)
        {
        cout << "Enter temperature in Fahrenheit: " <<endl;
        cin >> fernheit;
        cout << "Converting Fahrenheit to Celsius..." << endl;
        celsius = (fernheit - 32) / 1.8;
        cout << "Temperature in Celsius is: " << celsius;
        }

    else if (user_input == 2)
        {
        cout << "Enter temperature in Celsius: " <<endl;
        cin >> celsius;
        cout << "Converting Celsius to Fahrenheit..." << endl;
        fernheit = celsius * 1.8 + 32;
        cout << "Temperature in Fahrenheit is: " << fernheit;
        }


    getch();
}
