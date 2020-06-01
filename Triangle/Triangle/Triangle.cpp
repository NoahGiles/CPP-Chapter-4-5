// Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string triangleInput;
    int sideInput, sideInputTwo;
    double area, perimeter;
    cout << "You are faced with a triangle. ";
    while (triangleInput != "STOP")
    {
        cout << "Is the triangle equilateral or a right one ? (or STOP to stop) >>> \n";
        cin >> triangleInput;
        if (triangleInput == "equilateral")
        {
            cout << "What length is one of the sides?\n";
            cin >> sideInput;
            perimeter = sideInput * 3;
            area = (sqrt(3)/4) * (sideInput * sideInput);
            cout << "The perimeter of the triangle is " << perimeter << " and the area is " << area << ".\n";
        }
        else if (triangleInput == "right")
        {
            cout << "What is the length of the base?\n";
                cin >> sideInput;
                cout << "What is the height of the triangle?\n";
                cin >> sideInputTwo;
                perimeter = sideInput + sideInputTwo + sqrt((sideInput * sideInput) * (sideInputTwo * sideInputTwo));
                area = (sideInput * sideInputTwo) / 2;
                cout << "The perimeter of the triangle is " << perimeter << " and the area is " << area << ".\n";
                
        }
        
        else if (triangleInput == "STOP")
        {
        }

        else
        {
            cout << "THAT WAS NOT AN OPTION\n? (equilateral or right)\n";
        }
    }
    cout << "Goodbye!";
}

