#include "Application.h"
#include <GLFW\glfw3.h>


Application::Application()
{
}


Application::~Application()
{
}

void run(const char* title, unsigned int width, unsigned int height, bool fullscreen)
{
	
	if (glfwInit() == GL_FALSE)
	{
		GLFWmonitor* monitor = (fullscreen) ? glfwGetPrimaryMonitor() : nullptr;

	}
}

void gameover()
{

}