#ifndef _GAMEMANAGER_H_
#define _GAMEMANAGER_H_

#include "EngineDefines.h"

NAMESPACE_BEGIN(Engine)

class CScene;
class CRenderer;

class ENGINE_API CGameMaster
{
	SINGLETON(CGameMaster)

private:
	CScene*				m_pCurrentScene;
	CRenderer*			m_pRenderManager;


private:
	explicit CGameMaster();
	~CGameMaster();
public:
	void Update(const _float&);
	void Render();
	void Destroy();

public:
	CScene* GetCurrentScene()		{ return m_pCurrentScene; }
	void SetCurrentScene(CScene*);
};

NAMESPACE_END

#endif //_GAMEMANAGER_H_