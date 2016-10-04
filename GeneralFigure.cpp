#include "GeneralFigure.h"
#include "Circle.h"
#include "Line.h"
#include "LineSquare.h"
#include "Square.h"
#include "Trepzoid.h"
#include "Triangle.h"
#include "Background.h"

GeneralFigure * GeneralFigure::createGeneralFigure(std::string & order)
{
	if (order == "background") {
		return new Background;
	}
	else if (order == "circle" ) {
		return new Circle;
	}
	else if (order == "Line") {
		return new Line;
	}
	else if (order == "LineSquare") {
		return new LineSquare;
	}
	else if (order == "Square") {
		return new Square;
	}
	else if (order == "Trepzoid") {
		return new Trepzoid;
	}
	else if (order == "Triangle") {
		return new Triangle;
	}
	else {
		return nullptr;
	}

}
