#ifndef _MESH_H_
#define _MESH_H_

#include "Component.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class CVIBuffer;

class ENGINE_API CMesh : public CComponent
{
private:
	CVIBuffer* m_pVIBuffer;

private:
	explicit CMesh();
	explicit CMesh(const CMesh&);
	virtual ~CMesh();

public:
	virtual void Render();
	virtual void Destroy();

private:
	RESULT Ready(string, vec3);
	RESULT Ready2(string);
	RESULT Ready3(string);
public:
	virtual CComponent* Clone();
	static CMesh* Create(string, vec3);
	static CMesh* Create2(string);
	static CMesh* Create3(string);
};

NAMESPACE_END

#endif //_MESH_H_