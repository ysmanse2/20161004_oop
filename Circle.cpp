#include "Circle.h"

float *pixels = new float[width * height * 3];

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}

void Circle::drawFigure() {

	//¿ø
	double radius = 0;

	for (int j = 1; j <= 60; j++)
	{
		radius = j;
		for (double i = 0.0; i < 360.0; i += 0.1)
		{
			double angle = i * 3.1415926535897932384626433832795 / 180;

			int x = (int)(300 + radius * cos(angle));
			int y = (int)(100 + radius * sin(angle));

			drawPixel(x, y, 1.0f, 0.0f, 0.0f);
		}
	}

}