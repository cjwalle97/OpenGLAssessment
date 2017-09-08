#include "RenderGeometryApplication.h"

int main()
{
	Application * app = new RenderGeometryApplication();
	RenderGeometryApplication* geoapp = new RenderGeometryApplication();
	app->run("chris da best", 1200, 800, false);
	geoapp->generateHalfCircle(2, 3);
	delete app;
	return 0;
}