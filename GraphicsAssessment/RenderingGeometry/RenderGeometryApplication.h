#pragma once

#include <Application.h>
class RenderGeometryApplication :
	public Application
{
private:
	struct Vector
	{

	}

public:
	RenderGeometryApplication();
	~RenderGeometryApplication();

	// Inherited via Application
	virtual void startup() override;
	virtual void shutdown() override;
	virtual void update(float) override;
	virtual void draw() override;
	//virtual void generateHalfCircle(float radius, unsigned int points);
	//virtual void rotatePoints(Vector<Point> points, float nm);
};
