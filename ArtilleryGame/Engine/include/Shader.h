#ifndef _SHADER_H_
#define _SHADER_H_

#include "Component.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API CShader : public CComponent
{
protected:
	_uint				m_ShaderProgram;
	_uint				m_matWorldLocation;
	_uint				m_matViewLocation;
	_uint				m_matProjLocation;
	_uint				m_diffTexLocation;

private:
	explicit CShader();
	explicit CShader(const CShader&);
	virtual ~CShader();
public:
	virtual void Render();
	virtual void Destroy();

private:
	RESULT CreateShaderProgram();
	RESULT AddShader(const char*, const char*);
	string ReadShader(const char*);
	_uint CreateShader(GLenum, string);
	void SetLocation();
public:
	void SetMatrixInfo(const mat4x4, const mat4x4, const mat4x4);
	void SetTextureInfo();

private:
	RESULT Ready(const char*, const char*);
public:
	virtual CComponent* Clone();
	static CShader* Create(const char*, const char*);
};

NAMESPACE_END

#endif //_SHADER_H_