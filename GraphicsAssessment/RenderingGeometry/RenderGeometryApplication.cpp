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
	if (points <= 2)
	{
		printf("not enough points");
	}
	else
	{
		
	}
}

void rotatePoints(std::vector<Vertex> points, size_t nm)
{

}