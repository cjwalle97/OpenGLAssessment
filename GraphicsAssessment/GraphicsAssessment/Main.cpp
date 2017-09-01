#include "Camera.h"
#include "CameraApp.h"
#include "GeometryApp.h"
#include "Gizmos.h"
#include <GLFW\glfw3.h>
#include <stdio.h>
#include <assert.h>
#include <glm\vec3.hpp>
#include <glm\vec2.hpp>
#include <glm\glm.hpp>
#include <glm\ext.hpp>
#include <iostream>

int main()
{
	//GeometryApp* m_geoApp = new GeometryApp();
	CameraApp* m_app = new CameraApp();

	mat4 local = mat4(0.f);
	mat4 model = mat4(1.f);
	float Left = 2.f;
	float Right = 4.f;
	float Bottom = 2.f;
	float Top = 4.f;
	float Near = 2.f;
	float Far = 4.f;
	float AspectRatio = 16 / 9;
	float FOV = 4.f;
	int a = 1;
	int b = 4;


	//m_geoApp->startup(a, b);
	Camera* m_camera = new Camera(local, model);

	vec3 eye = vec3(10, 10, 10);
	vec3 center = vec3(0);
	vec3 up = vec3(0, 1, 0);

	//m_camera->setLookAt(eye, center, up);
	//m_camera->setPerspective(FOV, AspectRatio, Near, Far);
	//m_camera->setOrthographic(Left, Right, Bottom, Top, Near, Far);

	//For some reason both the monitor pointer and the window pointer both return as null, 
	//despite these same lines of code not doing so in the past..
	GLFWmonitor* monitor = glfwGetPrimaryMonitor();
	GLFWwindow* window = glfwCreateWindow(800, 800, "Title", nullptr, nullptr);
	glfwMakeContextCurrent(window);
	assert(window != nullptr);

	m_app->startup(window, monitor);
	m_app->update(window, monitor);
	
	return 0;
}