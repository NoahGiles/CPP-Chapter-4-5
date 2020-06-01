// PizzaOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string inputSize, inputToppings, pizzaInput;
    double total = 0;
    cout << "Would you like a pizza? (or no to quit) >>> \n";
    while (pizzaInput != "no")
    {
        cout << "What size pizza would you like? (small - 5.00, medium - 7.00, large - 10.00) >>> \n";
        while (inputSize != "small" && inputSize != "medium" && inputSize != "large")
        {
            cin >> inputSize;
            if (inputSize == "small")
            {
                total += 5;
            }
            else if (inputSize == "medium")
            {
                total += 7;
            }
            else if (inputSize == "large")
            {
                total += 10.00;
            }
            else
            {
                cout << "Unknown option selected. Try again >>> \n";
            }
        }
        cout << "What kind of pizza would you like? (cheese - .25, pepperoni - .50, sausage - .75)\n";
        while (inputToppings != "cheese" && inputToppings != "pepperoni" && inputToppings != "sausage")
        {
            cin >> inputToppings;
            if (inputToppings == "cheese")
            {
                total += .25;
            }
            else if (inputToppings == "pepperoni")
            {
                total += .50;
            }
            else if (inputToppings == "sausage")
            {
                total += .75;
            }
            else
            {
                cout << "Unknown option sleected. Try again >>> \n";
            }
        }
        inputSize = "";
        inputToppings = "";
        cout << "Would you like another pizza? >>> \n";
        cin >> pizzaInput;
    }
    cout << "Your total is " << total << ". Have a nice day.";
}