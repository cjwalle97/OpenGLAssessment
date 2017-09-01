#pragma once
class Application
{
private:
	bool m_gameover;


public:
	Application();
	~Application();

	void run(const char* title, unsigned int width, unsigned int height, bool fullscreen) {}
	virtual void startup() {}
	virtual void run(const char* title, unsigned int width, unsigned int height, bool fullscreen) {}
	virtual void shutdown() {}
	virtual void update(float deltaTime) {}
	virtual void draw() {}
};