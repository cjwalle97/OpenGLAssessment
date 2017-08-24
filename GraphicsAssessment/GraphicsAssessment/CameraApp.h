#include "gl_core_4_4.h"
#include "Application.h"
#include <GLFW\glfw3.h>
#include <glm\vec3.hpp>
#include <glm\glm.hpp>
#include <glm\ext.hpp>
#include <iostream>
using glm::vec3;
using glm::mat4;
using glm::mat3;
#pragma once

class CameraApp:
	public Application
{
public:
    CameraApp();
    ~CameraApp();
    void SetLookAt(vec3 eye, vec3 center, vec3 up){}
};