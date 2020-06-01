// LakeviewHotel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int nightsStayed = 0, phoneMinutes = 0, phoneInput, serviceCharge = 0;
    double bill;
    string stay, roomService;
    bool stayedAtAll = true;
    cout << "Would you like to spend a night at the Lakeview Hotel?\n";
    cin >> stay;
    while (stay == "yes")
    {

        if (stay == "no")
        {
            stayedAtAll = false;
        }
        else if (stay == "yes")
        {
            nightsStayed++;
            while (stay == "yes")
            {
                cout << "Would you like room service?";
                cin >> roomService;
                if (roomService == "yes")
                {
                    serviceCharge = 35;
                }
                cout << "How many minutes did you spend on the phone?\n";
                cin >> phoneInput;
                phoneMinutes += phoneInput;
                cout << "Would you like to stay again?\n";
                cin >> stay;
                if (stay == "yes")
                {
                    nightsStayed++;
                }
                else
                {
                    cout << "Thank you for staying at Lakeview Hotel!\n";
                }
            }

        }
            
    }
        bill = (nightsStayed * 100) + (phoneMinutes * .25) + serviceCharge;
    cout << "Given you stayed " << nightsStayed << " nights at the Lakeview Hotel and you used the phone for " << phoneMinutes << " minutes, your bill is $" << bill << ".";
    
}