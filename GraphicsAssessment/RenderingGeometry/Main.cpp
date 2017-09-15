#include "RenderGeometryApplication.h"

int main()
{
	Application * app = new RenderGeometryApplication();
	app->run("chris da best", 1200, 800, false);
	delete app;
	return 0;
}