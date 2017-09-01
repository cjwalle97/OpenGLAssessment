#pragma once
#include "Camera.h"
#include "Gizmos.h"
#include "Application.h"
#include <GLFW\glfw3.h>
#include <stdio.h>
#include <assert.h>
#include <glm\vec3.hpp>
#include <glm\vec2.hpp>
#include <glm\glm.hpp>
#include <glm\ext.hpp>
#include <iostream>

class CameraApp :
	public Application
{
public:
	CameraApp();
	~CameraApp();

	// Inherited via Application
	virtual void startup(GLFWwindow* window, GLFWmonitor* monitor) {}
	virtual void shutdown(GLFWwindow* window) {}
	virtual void update(GLFWwindow* window, GLFWmonitor* monitor) {}
	virtual void draw() {}
};