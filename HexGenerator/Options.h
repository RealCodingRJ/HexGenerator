#pragma once
#include <string>

struct Option {

	int r = 0;
	int g = 0;
	int b = 0;
	std::string hex;
};


Option r;
Option g;
Option b;

HexOption options;
HexCode hex;

class HexOption : public Option {

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

