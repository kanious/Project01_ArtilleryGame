#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include "Component.h"
#include "OpenGLDefines.h"

NAMESPACE_BEGIN(Engine)

class ENGINE_API CTransform : public CComponent
{
private:
	mat4x4				m_matWorld;
	vec3				m_vPos;
	vec3				m_vRot;
	vec3				m_vScale;
	vec3				m_vRevolve;
	CTransform*			m_pParentTransform;

private:
	explicit CTransform();
	explicit CTransform(const CTransform&);
	virtual ~CTransform();
public:
	virtual void Update(const _float&);
	virtual void Destroy();

public:
	const mat4x4* GetWorldMatrix()		{ return &m_matWorld; }
	const vec3 GetPosition()			{ return m_vPos; }
	const vec3 GetPositionWithParent();
	const _float GetPositionX()			{ return m_vPos.x; }
	const _float GetPositionY()			{ return m_vPos.y; }
	const _float GetPositionZ()			{ return m_vPos.z; }
	const vec3 GetRotation()			{ return m_vRot; }
	const vec3 GetRotationWithParent();
	const _float GetRotationX()			{ return m_vRot.x; }
	const _float GetRotationY()			{ return m_vRot.y; }
	const _float GetRotationZ()			{ return m_vRot.z; }
	const vec3 GetScale()				{ return m_vScale; }
	const vec3 GetRevolve()				{ return m_vRevolve; }
	const CTransform* GetParent()		{ return m_pParentTransform; }
	const mat4x4 GetParentMatrix();
	const vec3 GetRightVector()			{ return m_matWorld[0]; }
	const vec3 GetUpVector()			{ return m_matWorld[1]; }
	const vec3 GetLookVector()			{ return m_matWorld[2]; }
	void SetWorldMatrix(mat4x4);
	void SetPosRotScale(vec3, vec3, vec3);
	void SetPosition(vec3);
	void SetPositionX(_float);
	void SetPositionY(_float);
	void SetPositionZ(_float);
	void SetRotation(vec3);
	void SetRotationX(_float);
	void SetRotationY(_float);
	void SetRotationZ(_float);
	void SetScale(vec3);
	void SetScaleX(_float);
	void SetScaleY(_float);
	void SetScaleZ(_float);
	void SetRevolve(vec3);
	void SetParent(CTransform*);
	void AddPosition(vec3);
	void AddPositionX(_float);
	void AddPositionY(_float);
	void AddPositionZ(_float);
	void AddRotation(vec3);
	void AddRotationX(_float);
	void AddRotationY(_float);
	void AddRotationZ(_float);
	void AddScale(vec3);
	void AddRevolve(vec3);

private:
	RESULT Ready();
public:
	virtual CComponent* Clone();
	static CTransform* Create();
};

NAMESPACE_END

#endif //_TRANSFORM_H_