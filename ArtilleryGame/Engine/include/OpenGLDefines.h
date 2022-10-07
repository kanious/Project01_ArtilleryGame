#ifndef _OPENGLDEFINES_H_
#define _OPENGLDEFINES_H_

// For.OpenGL
#include <glew/glew.h> //#include <glad/glad.h>
#include <glut/freeglut.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
using namespace glm;

typedef struct vertex_info
{
	vec3 vPos;
	vec3 vColor;
	//vec2 vTexUV;
}VTX;

typedef struct index_info
{
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
}IDX;

typedef struct sVertex_XYZ_N_RGBA_UV
{
	vec3 vPos;
	vec3 vNormal;
	vec2 vTexUV;
}Vertex;

typedef struct sIndex
{
	unsigned int _0;
	unsigned int _1;
	unsigned int _2;
}Index;

#endif //_OPENGLDEFINES_H_