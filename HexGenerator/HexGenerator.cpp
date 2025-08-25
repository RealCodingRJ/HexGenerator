#include <iostream>
#include <time.h>
#include <stdio.h>
#include <print>
#include "Options.h"
#include "Codes.h"

auto hex = 0;
bool isHexValue = (hex << 0);

static void printedHexRand() 
{

	HexCode* ptr = nullptr;
	std::cout << ptr->Hex() << std::endl;
}


int main()
{
	
	options.getTitle("| Hex Consersion App | ");
	std::cout << "\n";

	std::println("Enter Type: ");

	std::string option;

	std::cin >> option;


	if (option == "rand" || options != "")
	{

		printedHexRand();
	}

	if (option == "hex" || options != "")
	{

		std::cin >> r.r;
		std::cin >> g.g;
		std::cin >> b.b;

		options.HexParse(r, g, b);

		hex.hexConverted(r.r);
		hex.hexConverted(g.g);
		hex.hexConverted(b.b);

	}
	
	system("pause > 0");
	return 0;
}
