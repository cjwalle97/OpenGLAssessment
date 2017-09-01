
#pragma once
class GLFWwindow;
class Application
{

private:
	bool m_gameover;


public:
	Application();
	~Application();

	virtual void startup() = 0;
	virtual void run(const char* title, unsigned int width, unsigned int height, bool fullscreen);
	virtual void shutdown() = 0;
	virtual void update(float deltaTime) = 0;
	virtual void draw() = 0;

	GLFWwindow* m_window;
};