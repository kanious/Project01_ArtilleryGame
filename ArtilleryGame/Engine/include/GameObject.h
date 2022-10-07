#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

#include "Base.h"

NAMESPACE_BEGIN(Engine)

class CComponent;
class CRenderer;
class CLayer;

class ENGINE_API CGameObject : public CBase
{
protected:
	_wchar_t*							m_UUID;
	_uint								m_objTag;
	_uint								m_layerTag;
	_uint								m_sceneTag;
	_bool								m_bEnable;
	_bool								m_bDead;

	unordered_map<_uint, CComponent*>	m_mapComponent;
	CRenderer*							m_pRenderer;
	CLayer*								m_pLayer;

protected:
	explicit CGameObject();
	virtual ~CGameObject();

public:
	virtual void Update(const _float&);
	virtual void Render();
	virtual void Destroy();
	void Enable();
	void Disable();
	void SetupGameObject(_uint, _uint, _uint);

public:
	const _wchar_t* GetUUID()		{ return m_UUID; }
	const _uint GetObjectTag()		{ return m_objTag; }
	const _uint GetLayerTag()		{ return m_layerTag; }
	const _uint GetSceneTag()		{ return m_sceneTag; }
	const _bool GetEnable()			{ return m_bEnable; }
	const _bool GetDead()			{ return m_bDead; }
	void SetObjectTag(_uint);
	void SetLayerTag(_uint);
	void SetSceneTag(_uint);
	void SetParentLayer(CLayer*);
	void SetDead(_bool);
public:
	RESULT AttachComponent(_uint, CComponent*);
	RESULT DetachComponent(_uint);
	CComponent* GetComponent(_uint);

private:
	_wchar_t* UUIDGenerate();
};

NAMESPACE_END

#endif //_GAMEOBJECT_H_