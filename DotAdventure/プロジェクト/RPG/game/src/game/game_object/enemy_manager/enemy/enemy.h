#pragma once

#include "aqua.h"
#include "../enemy_manager.h"
//#include "../../data/data.h"

//class CData;
class CEnemyManager;

class IEnemy
	: public aqua::IGameObject
{
public:
	IEnemy(aqua::IGameObject* parent, const std::string& name);

	virtual ~IEnemy() = default;

	virtual void Initialize(void);

	virtual void Update(void);

	virtual void Draw(void);

	virtual void Finalize(void);

protected:
	aqua::CSprite m_EnemySprite; //
	aqua::CVector2 m_Position; //
	
private:
	static const std::string m_object_category; //

	CEnemyManager* m_Enemy; //
};