#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include "Base.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API CComponent : public CBase
{
protected:
	_uint				m_tag;
	_bool				m_bEnable;

protected:
	explicit CComponent();
	virtual ~CComponent();

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

public:
	virtual CComponent* Clone() = 0;
};

NAMESPACE_END

#endif //_COMPONENT_H_