#include "Trepzoid.h"

const int width = 640;
const int height = 480;

float *pixels = new float[width * height * 3];

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}


void Trepzoid::drawFigure() {

	int i_center = 500;
	int j_center = 100;
	int thickness = 70;

	for (int j = j_center - thickness; j < j_center + thickness; j++) {
		for (int i = i_center - thickness + (j / 5); i < i_center + thickness - (j / 5); i++) {
			drawPixel(i, j, 1.0f, 0.0f, 0.0f);
		}
		//thickness--;
	}

}