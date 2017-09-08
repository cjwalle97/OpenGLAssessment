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
static float slices = 4;

void RenderGeometryApplication::draw()
{
	ImGui_ImplGlfwGL3_NewFrame();
	ImGui::Begin("chris");
	ImGui::Text("I'm not though");
	ImGui::DragFloat("Radius", &sradius);
	ImGui::DragFloat("Number of points", &spoints);
	ImGui::DragFloat("Number of Meridians", &slices);
	if (ImGui::Button("generate halfcircle"))
		generateHalfCircle(sradius, spoints);
	if (ImGui::Button("rotate points"))
		//rotatePoints(m_halfCircle, slices);
		printf("Rotates the Points");
	ImGui::End();
}
float PI = 3.14159265359;
void RenderGeometryApplication::generateHalfCircle(float radius, unsigned int points)
{
	assert(points >= 3);


	//generating a half circle
	//x = cos(angle) //when angle = 0 then x = 1
	//y = sin(angle) //when angle = 1 then y = 0
	float slice = PI / points;
	
	//angle is the number of points -1 *
	
	for (int i = 0; i < points; i++)
	{
		float angle = i * slice;
		float x = cos(angle);
		float y = sin(angle);
		vec4 pt = vec4(x, y, 0, 1);
		m_halfCircle.push_back(pt);
	}

	printf("radius is %f, numpoints is %f\n", sradius, spoints);
}

//void rotatePoints(std::vector<vec4> points, size_t nm)
//{
//
//}