#ifndef _VIBUFFER_H_
#define _VIBUFFER_H_

#include "Component.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API CVIBuffer
{
private:
	std::string			m_strName;
	_uint				m_iRefCnt;
	_uint				m_iVAO_ID;
private:
	_uint				m_iVB_ID;
	_uint				m_iNumVtx;
	_uint				m_iIB_ID;
	_uint				m_iNumIdx;


private:
	explicit CVIBuffer();
public:
	~CVIBuffer();

public:
	void Render();
	void Destroy();

private:
	RESULT Ready(_uint, VTX*, _uint, _uint*);
	RESULT Ready(_uint, Vertex*, _uint, _uint*);
public:
	static CVIBuffer* Create(_uint, VTX*, _uint, _uint*);
	static CVIBuffer* Create(_uint, Vertex*, _uint, _uint*);
	void AddRefCnt();
};

NAMESPACE_END

#endif //_VIBUFFER_H_