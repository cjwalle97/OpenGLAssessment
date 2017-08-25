#include "Camera.h"
#include <assert.h>


Camera::Camera()
{

}


Camera::~Camera()
{

}

void Camera::update(float deltaTime)
{

}

void Camera::setPerspective(float fieldOfView, float aspectRatio, float Near, float Far)
{

}

void Camera::setPosition(vec3 position)
{
	m_cameraPosition = position;
}

void Camera::setLookAt(vec3 eye, vec3 center, vec3 up)
{
	vec3 f = eye - center;
	vec3 z = glm::normalize(f);
	vec3 s = glm::cross(up, z);
	vec3 x = glm::normalize(s);
	vec3 u = glm::cross(z, x);
	vec3 y = u;
	mat4 V = mat4(
		vec4(x[0], x[1], x[2], 0.f),
		vec4(y[0], y[1], y[2], 0.f),
		vec4(z[0], z[1], z[2], 0.f),
		vec4(0.f, 0.f, 0.f, 1.f));
	mat4 T = mat4(
		vec4(1.f, 0.f, 0.f, 0.f),
		vec4(0.f, 1.f, 0.f, 0.f), 
		vec4(0.f, 0.f, 1.f, 0.f),
		vec4(-eye.x, -eye.y, -eye.z, 1.f));
	mat4 View = V * T;
	/*mat4 Test = ;
	assert(View == Test);*/

	mat4 M = glm::inverse(View);
}

mat4 Camera::getWorldTransform(mat4 model, mat4 local)
{
	m_worldTransform = model * local;
	return m_worldTransform;
}

mat4 Camera::getView()
{
	m_viewTransform = glm::inverse(m_worldTransform);
	return m_viewTransform;
}

mat4 Camera::getProjection()
{

	return m_projectionTransform;
}

mat4 Camera::getProjectionView()
{
	return m_projectionViewTransform;
}

void Camera::UpdateProjectionViewTransform()
{

}