#include "gl_core_4_4.h"
#include "Gizmos.h"
#include <GLFW\glfw3.h>
#include <glm\glm.hpp>
#include <glm\ext.hpp>
using glm::mat4;
using glm::vec4;
using glm::vec3;
#pragma once

class Camera
{
public:
	Camera();
	~Camera();
	mat4 worldTransform() {}
	mat4 viewTransform() {}
	mat4 projectionTransform() {}
	mat4 projectionViewTransform() {}

	virtual void update(float deltaTime) {}
	void setPerspective(float fieldOfView, float aspectRatio, float Near, float Far) {}
	void setLookAt(vec3 eye, vec3 center, vec3 up) {}
	void setPosition(vec3 postition) {}
	mat4 getWorldTransform() {}
	mat4 getView() {}
	mat4 getProjection() {}
	mat4 getProjectionView() {}
	void UpdateProjectionViewTransform() {}
};