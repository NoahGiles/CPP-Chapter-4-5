// ChoiceDoorPrize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int choice = 0;
    cout << "Hello! There are three doors pick a door! >>> \n";
    while (!(choice >= 1 && choice <= 3))
    {
        cin >> choice;
        if (choice == 1)
        {
            cout << "The door was full of bees!";
        }
        else if (choice == 2)
        {
            cout << "The door was full of wasps!";
        }
        else if (choice == 3)
        {
            cout << "The door was full of hornets!";
        }
        else
        {
            cout << "That door does not exist! Try again!\n";
        }
    }
}
