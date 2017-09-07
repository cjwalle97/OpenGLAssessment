#pragma once
#include <vector>
#include <Application.h>
#include "Shader.h"
#include "mesh.h"

class RenderGeometryApplication :
	public Application
{
private:
	vec4 m_halfCircle;

public:
	RenderGeometryApplication();
	~RenderGeometryApplication();

	// Inherited via Application
	virtual void startup() override;
	virtual void shutdown() override;
	virtual void update(float) override;
	virtual void draw() override;
	virtual void generateHalfCircle(float radius, unsigned int points);
	virtual void rotatePoints(std::vector<Vertex> points, float nm);
};
