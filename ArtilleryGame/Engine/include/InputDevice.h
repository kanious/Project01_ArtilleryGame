#ifndef _INPUTMANAGER_H_
#define _INPUTMANAGER_H_

#include "EngineDefines.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API CInputDevice
{
	SINGLETON(CInputDevice)

private:
	class KeyInfo
	{
	public:
		_int scancode;
		_int action;
		_int preAction;
		_int mods;
	};

private:
	GLFWwindow*								m_pWindow;
	unordered_map<_int, KeyInfo*>			m_mapKeyInfos;
	unordered_map<_int, KeyInfo*>			m_mapMouseButtonInfos;
	vec2									m_vecMousePos;
	vec2									m_vecMousePosPrevious;
	vec2									m_vecScroll;

	// double click
	//_float m_fTimeDelta;
	//_float m_fTimeDoubleClick;

private:
	explicit CInputDevice();
	~CInputDevice();
public:
	void Destroy();

public:
	RESULT SetupInputSystem(GLFWwindow*, _int);
	void SetMouseCursorMode(_int);
	static void KeyCallBack(GLFWwindow*, _int, _int, _int, _int);
	static void MouseButtonCallBack(GLFWwindow*, _int, _int, _int);
	static void MousePosCallBack(GLFWwindow*, _double, _double);
	static void MouseScrollCallBack(GLFWwindow*, _double, _double);
	_bool IsKeyDown(_int);
	_bool IsAnyKeyDown(_int);
	_bool IsMousePress(_int);
	vec2 GetMousePos() { return m_vecMousePos; }
	vec2 GetMouseMovedDistance();
	vec2 GetMouseScrollDistance();
	void Test();

private:
	void SetInputKey(_int, _int, _int, _int);
	void SetInputMouseButton(_int, _int, _int);
	void SetMousePos(vec2);
	void SetMouseScroll(vec2);
};

NAMESPACE_END

#endif //_INPUTMANAGER_H_