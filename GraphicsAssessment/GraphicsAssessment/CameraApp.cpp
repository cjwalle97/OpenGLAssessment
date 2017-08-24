#include "CameraApp.h"



CameraApp::CameraApp()
{
}


CameraApp::~CameraApp()
{
}

void SetLookAt(vec3 eye, vec3 center, vec3 up)
{
	vec3 f = eye - center;
	vec3 z = glm::normalize<>(f);
	vec3 s = glm::cross(up, z);
	vec3 x = glm::normalize<>(s);
	vec3 u = glm::cross(z, x);
	vec3 y = glm::normalize<>(u);


}