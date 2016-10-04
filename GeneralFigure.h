#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <GLFW/glfw3.h>
#include <stdlib.h>		  // srand, rand
#include <math.h>

class GeneralFigure {
public:
	virtual void drawFigure() = 0;

	static GeneralFigure *createGeneralFigure(std::string& order);


};