#ifndef _TIMEMANAGER_H_
#define _TIMEMANAGER_H_

#include "EngineDefines.h"
#include <chrono>

NAMESPACE_BEGIN(Engine)

class ENGINE_API CTimer
{
	SINGLETON(CTimer)

private:
	chrono::steady_clock::time_point		m_TimeLastUpdate;
	chrono::steady_clock::time_point		m_TimeCurrentUpdate;
	_float									m_fCurrentTime;
	_float									m_fTimeDelta;
	_float									m_fTimeDefault;
	_float									m_fFrameRate;

private:
	explicit CTimer();
	~CTimer();
public:
	void Update();
	void Destroy();

public:
	_float GetTimeDelta() { return m_fTimeDelta; }
	_float GetTimeDefault() { return m_fTimeDefault; }
	void SetFrameRate(_int);
	_bool IsUpdateAvailable();

};

NAMESPACE_END

#endif //_TIMEMANAGER_H_