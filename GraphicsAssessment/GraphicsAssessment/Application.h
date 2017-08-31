#pragma once
class Application
{
public:
	Application();
	~Application();

	void run(const char* title, unsigned int width, unsigned int height, bool fullscreen) {}
	virtual void startup() {}
	virtual void shutdown() {}
	virtual void update() {}
	virtual void draw() {}
};

