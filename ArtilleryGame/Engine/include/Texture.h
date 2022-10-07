#ifndef _TEXTURE_H_
#define _TEXTURE_H_

#include "Component.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API CTexture : public CComponent
{
private:
	_uint				m_iTextureID;
	_uint				m_iRefCnt;

private:
	explicit CTexture();
	explicit CTexture(const CTexture&);
	virtual ~CTexture();

public:
	virtual void Destroy();

public:
	_uint GetTextureID()		{ return m_iTextureID; }

private:
	RESULT Ready(string);
public:
	virtual CComponent* Clone();
	static CTexture* Create(string);
	void AddRefCnt();
};

NAMESPACE_END

#endif //_TEXTURE_H_