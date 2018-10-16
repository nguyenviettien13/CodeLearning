#include "Shape.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	Shape* r = Shape::Create(RECTANGLE);
	r->draw();
	Shape* c = Shape::Create(CIRCLE);
	c->draw();
	return 1;
}