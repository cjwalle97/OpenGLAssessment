#pragma once
#include "Application.h"
class GeometryApp :
	public Application
{
private:
	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;

public:
	GeometryApp();
	~GeometryApp();
};