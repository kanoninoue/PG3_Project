#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	IShape* iShape[2];
	iShape[0] = new Circle;
	iShape[1] = new Rectangle;

	iShape[0]->size();
	iShape[0]->draw();

	iShape[1]->size();
	iShape[1]->draw();

	delete iShape[0];
	delete iShape[1];

	return 0;
}