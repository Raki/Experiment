#pragma once
#include "CommonHeaders.h"

class BaseApp
{
private:
	void createWindow();
	void initVulkan();
	void compileShaders();
	void setupScene();
	void updateFrame();
	void destroyVulkan();

protected:
public:
	BaseApp();
	virtual void run()=0;
	virtual ~BaseApp();
};

