#include "Background.h"

const int width = 640;
const int height = 480;

float *pixels = new float[width * height * 3];

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}


void Background::drawFigure() {

	std::cout << "Background!!" << std::endl;

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			GeneralFigure::pixels[(i + width* j) * 3 + 0] = 1.0f;
			GeneralFigure::pixels[(i + width* j) * 3 + 1] = 1.0f;
			GeneralFigure::pixels[(i + width* j) * 3 + 2] = 1.0f;
		}
	}

}