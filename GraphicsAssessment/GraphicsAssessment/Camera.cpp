#include "Camera.h"
#include <assert.h>


Camera::Camera()
{
}


Camera::~Camera()
{
}

void setLookAt(vec3 eye, vec3 center, vec3 up)
{
	vec3 f = eye - center;
	vec3 z = glm::normalize(f);
	vec3 s = glm::cross(up, z);
	vec3 x = glm::normalize(s);
	vec3 u = glm::cross(z, x);
	vec3 y = glm::normalize(u);
	mat4 V = mat4(vec4(x[0], x[1], x[2], 0.f), vec4(y[0], y[1], y[2], 0.f),
		vec4(z[0], z[1], z[2], 0.f), vec4(0.f, 0.f, 0.f, 0.f));
	mat4 T = mat4(vec4(1.f, 0.f, 0.f, 0.f), vec4(0.f, 1.f, 0.f, 0.f), 
		vec4(0.f, 0.f, 1.f, 0.f), vec4(eye.x, eye.y, eye.z, 1.f));
	mat4 View = V * T;
	mat4 Test = View;
	assert(View == Test);

	mat4 M = glm::inverse(View);
}