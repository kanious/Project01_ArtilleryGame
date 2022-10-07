#ifndef _RENDERER_H_
#define _RENDERER_H_

#include "EngineDefines.h"

NAMESPACE_BEGIN(Engine)

class CGameObject;

class ENGINE_API CRenderer
{
	SINGLETON(CRenderer)

private:
	vector<CGameObject*>		m_vecRenderObj;


private:
	explicit CRenderer();
	~CRenderer();
public:
	void Render();
	void Destroy();

public:
	void AddRenderObj(CGameObject*);
	void ClearAllRenderObjList();
};

NAMESPACE_END

#endif //_RENDERER_H_