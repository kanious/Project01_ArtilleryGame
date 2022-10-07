#ifndef _OBJECTMANAGER_H_
#define _OBJECTMANAGER_H_

#include "EngineDefines.h"

NAMESPACE_BEGIN(Engine)

class CGameObject;

// ������Ʈ Ǯ���� ��ü

class ENGINE_API CObjectPooler
{
	SINGLETON(CObjectPooler)

private:
	list<CGameObject*> m_listGameObjects;

private:
	explicit CObjectPooler();
	~CObjectPooler();
public:
	void Destroy();

};

NAMESPACE_END

#endif //_OBJECTMANAGER_H_