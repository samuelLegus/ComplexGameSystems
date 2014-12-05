#pragma once

#include "Behaviour.h"
#include <glm/glm.hpp>

class Agent
{
public:
	Agent() :m_behaviour(nullptr), m_position(0), m_target(0) {}
	virtual ~Agent() {}

	const glm::vec3& getPosition() const { return m_position; }
	const glm::vec3& getTarget() const { return  m_target; }

	void setPosition(const glm::vec3& pos) { m_position = pos; }
	void setTarget(const glm::vec3& target) { m_target = target; }
	void setBehaviour(Behaviour * behaviour) { m_behaviour = behaviour; }

	virtual void update(float deltaTime)
	{
		if (m_behaviour != nullptr)
		{
			m_behaviour->execute(this);
		}
	}

private:
	Behaviour * m_behaviour;
	glm::vec3 m_position;
	glm::vec3 m_target;

};