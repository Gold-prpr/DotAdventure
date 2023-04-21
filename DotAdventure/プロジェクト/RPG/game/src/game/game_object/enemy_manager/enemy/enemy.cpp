#include "enemy.h"
#include "catcoin/catcoin.h"
#include "reddemon/reddemon.h"

const std::string IEnemy::m_object_category = "EnemyUnit";

IEnemy::
IEnemy(aqua::IGameObject* parent, const std::string& name)
	:aqua::IGameObject(parent, name, m_object_category)
	, m_Position(aqua::CVector2::ZERO)
{
}

void IEnemy::Initialize(void)
{
}

void IEnemy::Update(void)
{
	 m_EnemySprite.position = aqua::CVector2((aqua::GetWindowWidth() / 2.0f - m_EnemySprite.GetTextureWidth() / 2.0f), 30);
}

void IEnemy::Draw(void)
{
	m_EnemySprite.Draw();
}

void IEnemy::Finalize(void)
{
	m_EnemySprite.Delete();
}
