#include <iostream>
#include <time.h>
#include <stdio.h>
#include <print>

struct Option {

	int r = 0;
	int g = 0;
	int b = 0;
	std::string hex;
};


class HexOption : public Option  {

public:

	void getTitle(std::string title) {

		std::cout << "Welcome to: " << title << std::endl;

	}


public:

	void HexParse(Option r, Option g, Option b) {	

		std::cout << "R: " << r.r << std::endl;
		std::cout << "G: " << g.g << std::endl;
		std::cout << "B: " << b.b << std::endl;

	}
};

class Code 
{
	
public:

	virtual int Hex() = 0;

};

class HexCode : public Code 
{

public:

	static void hexConverted(int a) 
	{

		std::cout << std::hex << a;
	}

	int Hex() 
	{

		for (int i = 0; i < 6; i++)
		{
			


			int indexR = rand() % 255;
			int indexG = rand() % 255;
			int indexB = rand() % 255;

			std::cout << std::hex << indexR;
			std::cout << std::hex << indexG;
			std::cout << std::hex << indexB;

			return 0;
		}

		return  0;
	}


};

auto hex = 0;
bool isHexValue = (hex << 0);

static void printedHexRand() 
{

	HexCode* ptr = nullptr;
	std::cout << ptr->Hex() << std::endl;
}

int main()
{
	

	HexOption options;
	HexCode hex;
	
	Option r;
	Option g;
	Option b;

	options.getTitle("| Hex Consersion App | ");
	std::cout << "\n";

	std::println("Enter Type: ");

	std::string option;

	std::cin >> option;


	if (option == "rand") 
	{

		printedHexRand();
	}

	if (option == "hex") 
	{

		std::cin >> r.r;
		std::cin >> g.g;
		std::cin >> b.b;

		options.HexParse(r, g, b);

		hex.hexConverted(r.r);
		hex.hexConverted(g.g);
		hex.hexConverted(b.b);

	}

	else 
	{
		return 0;
	}
	
	system("pause > 0");
	return 0;
}
