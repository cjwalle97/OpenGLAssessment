#include "CameraApp.h"
#include "Camera.h"
#include "Gizmos.h"
#include <GLFW\glfw3.h>
#include <stdio.h>
#include <assert.h>
#include <glm\vec3.hpp>
#include <glm\vec2.hpp>
#include <glm\glm.hpp>
#include <glm\ext.hpp>
#include <iostream>
#include <imgui.h>


CameraApp::CameraApp() {}

CameraApp::~CameraApp() {}

void CameraApp::startup()
{
	glm::vec3 v = glm::vec3(1, 1, 1);

	if (!glfwInit())
	{
		printf("no GLFW");
	}
	
	
	ogl_LoadFunctions();
	auto major = ogl_GetMajorVersion;
	auto minor = ogl_GetMinorVersion;

	printf("gl: %i.%i\n", major, minor);
}

void CameraApp::shutdown()
{
	glfwSetWindowShouldClose(m_window, true);
	Gizmos::destroy();
	glfwDestroyWindow(m_window);
	glfwTerminate();
}

void CameraApp::update(float delta_time)
{
	glClearColor(0.3f, 1.0f, 0.3f, 1.0f);
	glm::vec4 clearcolor = glm::vec4(0.2f, 0.2f, 0.5f, 1.0f);

	auto projection = glm::perspective(glm::pi<float>() * 0.25f, 16 / 9.f, 0.1f, 1000.f);
	glm::mat4 view = glm::lookAt(glm::vec3(10, 10, 10), glm::vec3(0), glm::vec3(0, 1, 0));

	Gizmos::create();
	while (true)
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glm::mat4 s1 = glm::mat4(1);
		glm::vec4 center = glm::vec4(0, 0, 0, 1);
		glm::vec4 color = glm::vec4(0, 0, 0, 0);
		Gizmos::clear();
		Gizmos::addTransform(glm::mat4(1));
		Gizmos::addSphere(s1[3], 1, 20, 20, color);
		Gizmos::addTransform(s1, 4);
		glm::vec4 white(1);
		glm::vec4 black(0, 0, 0, 1);

		for (int i = 0; i < 21; ++i) {
			Gizmos::addLine(glm::vec3(-10 + i, 0, 10), glm::vec3(-10 + i, 0, -10), i == 10 ? white : black);
			Gizmos::addLine(glm::vec3(10, 0, -10 + i), glm::vec3(-10, 0, -10 + i), i == 10 ? white : black);
		}

		if (glfwWindowShouldClose(m_window))
		{
			CameraApp::shutdown();
			break;
		}

		if (glfwGetKey(m_window, GLFW_KEY_ESCAPE))
		{
			CameraApp::shutdown();
			break;
		}

		if (glfwGetKey(m_window, GLFW_KEY_F))
		{
			clearcolor.r -= 0.1f;
			clearcolor.b -= 0.1f;
			clearcolor.g -= 0.1f;
		}

		glClearColor(clearcolor.r, clearcolor.g, clearcolor.b, clearcolor.a);
		Gizmos::draw(projection * view);
		Gizmos::clear();
		glfwSwapBuffers(m_window);
		glfwPollEvents();
	}

}

void CameraApp::draw()
{

}
