#pragma once
#include "Application.h"
#include <glm/glm.hpp>

struct Vertex
{
	glm::vec4 position;
	glm::vec4 color;
};
class GeometryApp :	public Application
{

private:
	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;
	unsigned int m_programID;
	glm::mat4 m_projectionViewMatrix;


	// Inherited via Application
	virtual void startup() override;

	virtual void shutdown() override;

	virtual void update(float deltaTime) override;

	virtual void draw() override;

};