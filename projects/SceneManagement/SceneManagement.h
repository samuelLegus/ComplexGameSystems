#pragma once

#include "Application.h"
#include <glm/glm.hpp>
#include <glm/ext.hpp>

// derived application class that wraps up all globals neatly
class SceneManagement : public Application
{
public:

	SceneManagement();
	virtual ~SceneManagement();

protected:

	virtual bool onCreate(int a_argc, char* a_argv[]);
	virtual void onUpdate(float a_deltaTime);
	virtual void onDraw();
	virtual void onDestroy();

	glm::mat4	m_cameraMatrix;
	glm::mat4	m_projectionMatrix;

	int planeSphereTest(const glm::vec4& plane, const glm::vec3& center, float radius)
	{
		float dist = glm::dot<float>((glm::vec3)plane.xyz, center) - plane.w;

		if (dist > radius)
		{
			return 1;
		}
		else if ( dist < - radius)
		{
			return -1;
		}
		else
		{
			return 0;
		}
	}
};