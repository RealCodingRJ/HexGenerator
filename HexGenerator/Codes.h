#pragma once

#include <iostream>
#include <time.h>
#include <stdio.h>

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