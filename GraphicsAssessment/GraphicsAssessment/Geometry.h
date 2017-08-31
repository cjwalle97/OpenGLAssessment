#include "gl_core_4_4.h"
#include <GLFW\glfw3.h>
#include <stdio.h>
#include <assert.h>
#include <glm\vec3.hpp>
#include <glm\vec2.hpp>
#include <glm\glm.hpp>
#include <glm\ext.hpp>
#include <iostream>

using glm::vec3;
using glm::vec4;

#pragma once
class Geometry
{
private:
	struct Vertex
	{
		vec4 position;
		vec4 color;
	};
public:
	Geometry();
	~Geometry();
	void generateGrid(unsigned int rows, unsigned int columns) {}
};

