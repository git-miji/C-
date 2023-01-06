#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // Area calculation of a triangle
    double base, height, area;
    cout << "Enter base: " << endl;
    cin >> base;
    cout << endl;

    cout << "Enter height: " << endl;
    cin >> height;
    cout << endl;

    area = 0.5 * (base * height);
    cout << "The area of the triangle is: " << area <<endl;
    getch();
}
