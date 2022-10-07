#ifndef _CAMERA_H_
#define _CAMERA_H_

#include "Component.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class CComponent;

class ENGINE_API CCamera : public CComponent
{
protected:
	vec3			m_vEye;
	vec3			m_vTarget;
	vec3			m_vUp;
	mat4x4			m_matView;

	_float			m_fFov;
	_float			m_fRatio;
	_float			m_fNear;
	_float			m_fFar;
	mat4x4			m_matProj;


protected:
	explicit CCamera();
	explicit CCamera(const CCamera&);
	virtual ~CCamera();
public:
	virtual void Update(const _float&);
	virtual void Destroy();

public:
	const vec3 GetCameraEye() { return m_vEye; }
	const vec3 GetCameraTarget() { return m_vTarget; }
	const vec3 GetUpVector() { return m_vUp; }
	const mat4x4 GetViewMatrix() { return m_matView; }
	const _float GetFieldOfView() { return m_fFov; }
	const _float GetRatio() { return m_fRatio; }
	const _float GetNear() { return m_fNear; }
	const _float GetFar() { return m_fFar; }
	const mat4x4 GetProjMatrix() { return m_matProj; }
	void SetCameraEye(vec3);
	void SetCameraTarget(vec3);
	void SetUpVector(vec3);
	void SetFieldOfView(_float);
	void SetRatio(_float);
	void SetNear(_float);
	void SetFar(_float);
public:
	void CalculateViewMatrix();
	void CalculateProjMatrix();

private:
	RESULT Ready(vec3, vec3, vec3, _float, _float, _float, _float);
public:
	virtual CComponent* Clone();
	static CCamera* Create(vec3, vec3, vec3, _float, _float, _float, _float);
};

NAMESPACE_END

#endif //_CAMERA_H_