#include <iostream>
#include <time.h>
#include <stdio.h>
#include <print>

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
	std::println("Enter Type: ");

	std::string option;
	std::cin >> option;



	if (option == "rand") 
	{

		printedHexRand();
	}

	if (option == "hex") 
	{
		
		HexCode m;
		m.Hex();

	}

	else 
	{
		return 0;
	}
	
	system("pause > 0");
	return 0;
}
