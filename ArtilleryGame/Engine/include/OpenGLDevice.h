#ifndef _OPENGLDEVICCE_H_
#define _OPENGLDEVICCE_H_

#include "EngineDefines.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API COpenGLDevice
{
	SINGLETON(COpenGLDevice)

private:
	GLFWwindow*				m_pWindow;

private:
	explicit COpenGLDevice();
	~COpenGLDevice();
public:
	void Destroy();

public:
	GLFWwindow* GetWindow() { return m_pWindow; }
	RESULT CreateOpenGLWindow(_int, _int, const char*);
private:
	void TerminateOpenGLWindow();

};

NAMESPACE_END

#endif //_OPENGLDEVICCE_H_