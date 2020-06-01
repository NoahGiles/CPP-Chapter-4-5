#include <iostream>
#include<string>


int main()
{
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supremeBurrito = 4.50;
	double potatoOllas = 1.99;
	double tacosOrdered, burritosOrdered, enchiladasOrder, tostadasOrdered, drinkOrdered, churroOrdered, supremeBurritoOrdered, potatoOllasOrdered;
	double total = 0.00;
	std::string choice;


	std::cout << "********Welcome to Delgados Tacos***********\n\n\n\n\n\n" << std::endl;
	std::cout << "  TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT                   TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT" << std::endl;
	std::cout << "  T    -----------------------         T                   T   tacos - .99        churro - 1.25         T" << std::endl;
	std::cout << "  T    |         OO           |         T                  T   burritos - 1.99    supremeBurrito - 4.50 T" << std::endl;
	std::cout << "  T    |        O--O          |         T                  T   enchiladas - 2.99  potatoOllas - 1.99    T" << std::endl;
	std::cout << "  T    |         OO           |         T                  T   tostadas - 1.50                          T" << std::endl;
	std::cout << "  T    ----------|------------         TTTTTTT             T   drink - .99                              T" << std::endl;
	std::cout << "  T                                    T     T             TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"<< std::endl;
	std::cout << "  T                                    T     T" << std::endl;
	std::cout << "  T    OO                              T  OO T" << std::endl;
	std::cout << "  TTTTO  OTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTO  OT " << std::endl;
	std::cout << "       OO                                 OO " << std::endl;


	std::cout << "What would you like to order? (enter 'nothing' to end)\n" << std::endl;
	while (choice != "nothing")
	{
		std::cout << "Choose a food >>> ";
		std::cin >> choice;
		if (choice == "tacos")
		{
			std::cout << "How many tacos would you like?\n";
			std::cin >> tacosOrdered;
			total += (tacos * tacosOrdered);
		}
		else if (choice == "burritos")
		{
			std::cout << "How many burritos would you like?\n";
			std::cin >> burritosOrdered;
			total += (burritos * burritosOrdered);
		}
		else if (choice == "enchiladas")
		{
			std::cout << "How many enchiladas would you like?\n";
			std::cin >> enchiladasOrder;
			total += (enchiladas * enchiladasOrder);
		}
		else if (choice == "tostadas")
		{
			std::cout << "How many tostadas would you like?\n";
			std::cin >> tostadasOrdered;
			total += (tostadas * tostadasOrdered);
		}
		else if (choice == "drink")
		{
			std::cout << "How many drinks would you like?\n";
			std::cin >> drinkOrdered;
			total += (drink * drinkOrdered);
		}
		else if (choice == "churro")
		{
			std::cout << "How many churros would you like?\n";
			std::cin >> churroOrdered;
			total += (churro * churroOrdered);
		}
		else if (choice == "supremeBurrito")
		{
			std::cout << "How many supreme burritos would you like?\n";
			std::cin >> supremeBurritoOrdered;
			total += (supremeBurrito * supremeBurritoOrdered);
		}
		else if (choice == "potatoOllas")
		{
			std::cout << "How many potato ollas would you like?\n";
			std::cin >> potatoOllasOrdered;
			total += (potatoOllas * potatoOllasOrdered);
		}
		else if (choice == "nothing")
		{
			std::cout << "End of order.\n";
		}
		else
		{
			std::cout << "THAT IS NOT AN OPTION!\n";
		}
	}
	std::cout << "Your total is >>> " << total << ".\nHave a nice day!\n";

	system("pause");
	return 0;
}