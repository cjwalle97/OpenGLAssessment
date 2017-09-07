#include "RenderGeometryApplication.h"
#include "Shader.h"
#include "mesh.h"
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

//void RenderGeometryApplication::generateHalfCircle(float radius, unsigned int points)
//{
//	assert(points <= 2);
//	
//}

//void rotatePoints(Vector<Point> points, size_t nm)
//{
//
//}