#ifndef _SCENE_H_
#define _SCENE_H_

#include "Base.h"

NAMESPACE_BEGIN(Engine)

class CLayer;
class CGameObject;

class ENGINE_API CScene : public CBase
{
protected:
	_uint						m_tag;
	vector<CLayer*>				m_vecLayer;

protected:
	explicit CScene();
	virtual ~CScene();

public:
	virtual void Update(const _float&);
	virtual void Render();
	virtual void Destroy();

public:
	_uint GetSceneTag()			{ return m_tag; }
	void SetSceneTag(_uint);
	RESULT ToggleLayer(_uint, _bool);
	CLayer* GetLayer(_uint);
	RESULT AddGameObjectToLayer(_uint, CGameObject*);
	RESULT RemoveGameObjectFromLayer(_uint, CGameObject*);
};

NAMESPACE_END

#endif //_SCENE_H_