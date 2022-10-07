#ifndef _MESHSQUARE_H_
#define _MESHSQUARE_H_

#include "Component.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class CVIBuffer;

class ENGINE_API CMeshSquare : public CComponent
{
private:
	CVIBuffer* m_pVIBuffer;

private:
	explicit CMeshSquare();
	explicit CMeshSquare(const CMeshSquare&);
	virtual ~CMeshSquare();

public:
	virtual void Render();
	virtual void Destroy();

private:
	RESULT Ready(string);
public:
	virtual CComponent* Clone();
	static CMeshSquare* Create(string);
};

NAMESPACE_END

#endif //_MESHSQUARE_H_