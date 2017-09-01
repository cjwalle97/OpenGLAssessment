#pragma once

#include <GLFW\glfw3.h>
#include <stdio.h>
#include <assert.h>
#include <glm\vec4.hpp>
#include <glm\vec3.hpp>
#include <glm\vec2.hpp>
#include <glm\glm.hpp>
#include <glm\ext.hpp>
#include <iostream>

using glm::vec4;

class Mesh
{
private:
	struct Vertex
	{
		vec4 position;
		vec4 color;
	};
	unsigned int m_vao;
	unsigned int m_vbo;
	unsigned int m_ibo;
	//std::vector<unsigned int> m_indices;
	//std::vector<Vertex> m_vertices;

public:
	Mesh();
	~Mesh();
	void CreateBuffers();
	//void initialize(std::vector<Vector>8verts, std::vector<unsigned int>8indices);

	void bind();
	void unbind();
	unsigned int index_Count();
	unsigned int vector_Count();
};

