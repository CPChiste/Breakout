#include "Display.h"
#include "ShapeSimulator.h"
#include "Ball.h"

int main(void) {
	Display disp;  // create a 1000x1000 window
	ShapeSimulator sim(disp, 100);

	sim.addShape(new Ball(Point(100, 100), Vector(200, 200), 10));

	sim.run();
}
