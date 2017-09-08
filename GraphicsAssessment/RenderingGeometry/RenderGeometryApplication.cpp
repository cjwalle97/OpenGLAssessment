#include "RenderGeometryApplication.h"


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
static float sradius = 1;
static float spoints = 3;
void RenderGeometryApplication::draw()
{
	ImGui_ImplGlfwGL3_NewFrame();
	ImGui::Begin("chris");
	ImGui::Text("I'm not though");
	ImGui::DragFloat("Radius", &sradius);
	ImGui::DragFloat("Number of points", &spoints);
	if (ImGui::Button("generate halfcircle"))
		generateHalfCircle(sradius, spoints);

	ImGui::End();
}
float PI = 3.14159265359;
void RenderGeometryApplication::generateHalfCircle(float radius, unsigned int points)
{
	assert(points >= 3);

	vec4 pt = vec4(0, 0, 0, 1);
	//generating a half circle
	//x = cos(angle) //when angle = 0 then x = 1
	//y = sin(angle) //when angle = 1 then y = 0

	//angle is the number of points -1 *
	for (int i = 0; i < points; i++)
	{
		m_halfCircle.push_back(pt);
	}

	printf("radius is %f, numpoints is %f\n", sradius, spoints);
}

//void rotatePoints(std::vector<Vertex> points, size_t nm)
//{
//
//}