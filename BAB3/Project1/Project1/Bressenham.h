#include <stdlib.h>
#include <glut.h>
#include <iostream>

void setPixel(GLint xCoordinate, GLint yCoordinate)
{
	glBegin(GL_POINTS);
	glVertex2i(xCoordinate, yCoordinate);
	glEnd();
	glFlush();
}

void lineBres(GLint x1, GLint y1, GLint xEnd, GLint yEnd)//rumus
{
	GLint dx = (xEnd - x1);
	GLint dy = (yEnd - y1);
	GLint p = 2 * dy - dx;
	GLint twoDy = 2 * dy;
	GLint twoDyMinusDx = 2 * (dy - dx);
	GLint x, y;

	if (x1 > xEnd) {
		x = xEnd;
		y = yEnd;
		xEnd = x;
	}
	else {
		x = x1;
		y = y1;
	}
	setPixel(x, y);
	while (x<xEnd) {
		x++;
		if (p<0)
			p += twoDy;
		else {
			y++;
			p += twoDyMinusDx;
		}
		setPixel(x, y);
	}
}
void drawMyLine()
{
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(4.0);
	GLint x1 = 15;
	GLint y1 = 6;
	GLint xEnd = 28;
	GLint yEnd = 13;
	lineBres(x1, y1, xEnd, yEnd);
}

void display()
{
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 50.0, 0.0, 50.0);
}
