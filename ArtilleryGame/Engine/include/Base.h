#ifndef _BASE_H_
#define _BASE_H_

#include "EngineDefines.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API CBase
{
protected:
	explicit CBase();
	virtual ~CBase();

public:
	virtual void Update(const _float&);
	virtual void Render();
	virtual void Destroy();
};

NAMESPACE_END

#endif //_BASE_H_