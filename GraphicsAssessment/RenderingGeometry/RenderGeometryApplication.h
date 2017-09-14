#pragma once
#include "mesh.h"
#include "Shader.h"
#include <iostream>
#include <vector>
#include <Application.h>
#include <imgui.h>
#include <imgui_impl_glfw_gl3.h>

class RenderGeometryApplication :
	public Application
{
private:
	std::vector<vec4> m_halfCircle;
	std::vector<vec4> m_sphere;
	bool m_halfCircleMade;

public:
	RenderGeometryApplication();
	~RenderGeometryApplication();

	// Inherited via Application
	virtual void startup() override;
	virtual void shutdown() override;
	virtual void update(float) override;
	virtual void draw() override;
	virtual void generateHalfCircle(float radius, unsigned int points);
	virtual void rotatePoints(std::vector<vec4> points, size_t nm);
};
