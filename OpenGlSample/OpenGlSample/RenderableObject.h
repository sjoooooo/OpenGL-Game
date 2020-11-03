#ifndef __RENDERABLEOBJECT_H__
#define __RENDERABLEOBJECT_H__

#include "Object.h"


class RenderableObject : public Object
{
public:
	GLuint VertexArrayID;
	GLuint programID;
	GLuint MatrixID;
	GLuint ViewMatrixID;
	GLuint ModelMatrixID;
	GLuint Texture;
	GLuint TextureID;

	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> uvs;
	std::vector<glm::vec3> normals;

	GLuint vertexbuffer;
	GLuint uvbuffer;
	GLuint normalbuffer;
	GLuint LightID;

public:
	// vec3�� ��ǥ�� �޾ƿ� Position
	glm::vec3 Position;

	// ������ ��ǥ�� �޾ƿ� X Y Z
	float PosX, PosY, PosZ;

	// ������Ʈ�� ��ǥ�� ����
	void SetPosition(float x, float y, float z);

	// ������Ʈ�� ȸ�������� ����
	void RotateObj(float angle, float R_x, float R_y, float R_z);

	float MoveSpeed = 1.0f;

public:
	virtual void shutDown() override;

};

#endif