#include "RenderGeometryApplication.h"
#include <imgui.h>
#include <imgui_impl_glfw_gl3.h>
#include <gl_core_4_4.h>
#include <iostream>

RenderGeometryApplication::RenderGeometryApplication()
{

}

RenderGeometryApplication::~RenderGeometryApplication()
{

}

void RenderGeometryApplication::startup()
{
	
}

void RenderGeometryApplication::shutdown()
{

}

void RenderGeometryApplication::update(float)
{

}

void RenderGeometryApplication::draw()
{
	ImGui_ImplGlfwGL3_NewFrame();
	ImGui::Begin("chris");
	ImGui::Text("I'm not though");
	ImGui::End();
}

void RenderGeometryApplication::generateHalfCircle(float radius, unsigned int points)
{
	assert(points >= 3);
	
	float PI = 3.14159265359;
	int Sections = points - 1;
	float Angle = PI / Sections;
	vec4 startPoint;
	startPoint.x = Angle * radius;
	startPoint.y = Angle * radius;
	startPoint.z = 0.f;
	m_halfCircle[0] = startPoint;
	
	vec4 currentPoint;
	for (int k = 0; k < points - 1; k++)
	{
		currentPoint.x = startPoint.y * Angle
		m_halfCircle[k] = currentPoint;
	}
}

void rotatePoints(std::vector<Vertex> points, size_t nm)
{

}