#include "Line.h"


const int width = 640;
const int height = 480;

float *pixels = new float[width * height * 3];

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}

void drawBoldLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue)
{

	for (int i = i0; i <= i1; i++)
	{
		const int j = (j1 - j0)*(i - i0) / (i1 - i0) + j0;

		for (int k = 0; k < 20; k++) {
			drawPixel(i + k, j, red, green, blue);
		}
	}
}

void Line::drawFigure() {

	//±½Àº ´ë°¢¼±
	const int i0 = 50, i1 = 150;
	const int j0 = 350, j1 = 450;

	drawBoldLine(i0, j0, i1, j1, 1.0f, 0.0f, 0.0f);

}