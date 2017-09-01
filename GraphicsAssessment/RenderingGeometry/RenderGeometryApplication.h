#pragma once

#include <Application.h>
class RenderGeometryApplication :
	public Application
{
public:
	RenderGeometryApplication();
	~RenderGeometryApplication();

	// Inherited via Application
	virtual void startup() override;
	virtual void shutdown() override;
	virtual void update(float) override;
	virtual void draw() override;
};

