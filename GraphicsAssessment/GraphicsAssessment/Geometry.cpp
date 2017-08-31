#include "Geometry.h"



Geometry::Geometry()
{
}


Geometry::~Geometry()
{
}

void Geometry::generateGrid(unsigned int rows, unsigned int columns)
{
	Vertex* aoVertices = new Vertex[rows, columns];
	for (unsigned int r = 0; r < rows; r++)
	{
		for (unsigned int c = 0; c < columns; c++)
		{
			aoVertices[r * columns].position = vec4((float)c, 0, (float)r, 1);
			vec3 color = vec3(sinf((c / (float)(columns - 1))* (r / (float)(rows - 1))));
			aoVertices[r * columns + c].color = vec4(color, 1);
		}
	}


	delete[] aoVertices;
}