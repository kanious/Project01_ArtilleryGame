#ifndef _LAYER_H_
#define _LAYER_H_

#include "Base.h"

NAMESPACE_BEGIN(Engine)

class CGameObject;
class CObjectManager;
class CScene;

class ENGINE_API CLayer : public CBase
{
protected:
	_uint						m_tag;
	_bool						m_bEnable;

	list<CGameObject*>			m_listGameObjects;

protected:
	explicit CLayer();
	virtual ~CLayer();

public:
	virtual void Update(const _float&);
	virtual void Render();
	virtual void Destroy();
	void Enable();
	void Disable();

public:
	const _uint GetTag()		{ return m_tag; }
	const _bool GetEnable()		{ return m_bEnable; }
	void SetTag(_uint);
	RESULT AddGameObject(CGameObject*);
	RESULT RemoveGameObject(CGameObject*);
	void RemoveAllGameObject();

private:
	RESULT Ready(_uint);
public:
	static CLayer* Create(_uint);
};

NAMESPACE_END

#endif //_LAYER_H_