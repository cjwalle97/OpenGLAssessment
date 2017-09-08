#include "Shader.h"
#include "mesh.h"
#include <gl_core_4_4.h>
#include <imgui.h>
#include <imgui_impl_glfw_gl3.h>



Shader::Shader()
{
}


Shader::~Shader()
{
}

void Shader::bind()
{

}

void Shader::unbind()
{

}

//loads a File with the name of the inputed constant chararacter pointer and then runs it the inputed type of Shader
void Shader::load(const char * filename, unsigned int type)
{
	switch (type)
	{
	case GL_FRAGMENT_SHADER:
	{
		const char* fsSource = "#version 410\n \
		in vec4 vColor;\
		out vec4 fragColor;\
		void main() {fragColor = vColor}";
	}

	case GL_VERTEX_SHADER:
	{
		const char* fsSource = "#version 410\n \
		in vec4 vColor;\
		out vec4 vertColor;\
		void main() {vertColor = vColor}";
	}
	}
}

void Shader::attach()
{

}

void Shader::defaultLoad()
{

}

//unsigned int Shader::getUniform(const char *)
//{
//
//}
