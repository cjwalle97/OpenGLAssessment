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

struct Vertex
{
	vec4 position;
	vec4 color;
};

void generateGrid(unsigned int rows, unsigned int columns)
{
	Vertex* aoVertices = new Vertex[rows, columns];
	for (unsigned int r = 0; r < rows; r++)
	{
		for (unsigned int c = 0; c < columns; c++)
		{
			aoVertices[r * columns].position = vec4((float)c, 0, (float)r, 1);
			vec3 color = vec3(sinf((c / (float)(columns - 1))* (r / (float)(rows - 1))) );
			aoVertices[r * columns + c].color = vec4(color, 1);
		}
	}
	

	delete[] aoVertices;
}