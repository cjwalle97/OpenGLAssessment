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
	glUseProgram(m_program);
}

void Shader::unbind()
{
	glUseProgram(0);
}

//loads a File with the name of the inputed constant chararacter pointer and then runs it the inputed type of Shader
void Shader::load(const char * filename, unsigned int type)
{
	std::string line, contents;
	std::ifstream in(filename);

	while (std::getline(in, line))
	{
		contents += line + "\n";
	}

	const char* data = contents.c_str();

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
	m_program = glCreateProgram();
	glAttachShader(m_program, m_vertexShader);
	glAttachShader(m_program, m_fragmentShader);
	glLinkProgram(m_program);

	int success = GL_FALSE;
	glGetProgramiv(m_program, GL_LINK_STATUS, &success);

}

void Shader::defaultLoad()
{

}

unsigned int Shader::getUniform(const char* name)
{

}
