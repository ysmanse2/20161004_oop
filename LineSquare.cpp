#include "LineSquare.h"


const int width = 640;
const int height = 480;

float *pixels = new float[width * height * 3];

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}

void LineSquare::drawFigure() {

	//ºó»ç°¢Çü
	int i_center = 300, j_center = 400;
	int thickness = 50;

	for (int j = j_center - thickness; j < j_center + thickness; j++) {
		for (int i = i_center - thickness; i < i_center + thickness; i++) {
			if (i < ((i_center - thickness) + 10) || i >((i_center + thickness) - 10)) {
				drawPixel(i, j, 1.0f, 0.0f, 0.0f);
			}
			else if (j < ((j_center - thickness) + 10) || j >((j_center + thickness) - 10)) {
				drawPixel(i, j, 1.0f, 0.0f, 0.0f);
			}
		}
	}

}