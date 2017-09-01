#include "RenderGeometryApplication.h"
#include <imgui.h>
#include <imgui_impl_glfw_gl3.h>
#include <gl_core_4_4.h>

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
	ImGui::Text("Hello world");
	ImGui::End();
}
