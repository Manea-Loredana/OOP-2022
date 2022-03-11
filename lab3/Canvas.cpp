#include "Canvas.h"
#include <stdio.h>

Canvas::Canvas(int  lines, int columns)
{

	this->lines = lines;
	this->columns = columns;
	Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
}

void Canvas::SetPoint(int x, int y, char ch)
{
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
}

void Canvas::Print()
{
	for (int i = 0; i < this->lines; i++) {
		printf("\n");
		for (int j = 0; j < this->columns; j++)
			printf("%c ", data[i][j]);


	}
	printf("\n");

}


void Canvas::Clear()
{

	for (int i = 0; i < this->lines; i++)
		for (int j = 0; j < this->columns; j++)
			data[i][j] = ' ';
}
