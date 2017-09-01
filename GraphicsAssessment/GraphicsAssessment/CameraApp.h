#pragma once
#include "Application.h"


class CameraApp :
	public Application
{
public:
	CameraApp();
	~CameraApp();

	// Inherited via Application
	virtual void startup() override;
	virtual void shutdown() override;
	virtual void update(float deltaTime) override;
	virtual void draw() override;
};