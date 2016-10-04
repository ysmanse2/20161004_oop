// 20161004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GeneralFigure.h"
#include <vector>

int main()
{
	std::vector<GeneralFigure*> go_vector;

	go_vector.push_back(GeneralFigure::createGeneralFigure(std::string("background")));
	go_vector.push_back(GeneralFigure::createGeneralFigure(std::string("circle")));
	go_vector.push_back(GeneralFigure::createGeneralFigure(std::string("Line")));
	go_vector.push_back(GeneralFigure::createGeneralFigure(std::string("LineSquare")));
	go_vector.push_back(GeneralFigure::createGeneralFigure(std::string("Square")));
	go_vector.push_back(GeneralFigure::createGeneralFigure(std::string("Trepzoid")));
	go_vector.push_back(GeneralFigure::createGeneralFigure(std::string("Triangle")));

	//better style
	for (auto itr : go_vector) {
		(*itr).drawFigure();
	}

    return 0;
}