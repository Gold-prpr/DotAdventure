#include "bossbattle.h"

CBossBattle::CBossBattle(aqua::IGameObject* parent)
	: IEnemy(parent, "BossBattle")
{
}

void CBossBattle::Initialize(void)
{
	m_pData = (CData*)aqua::FindGameObject("Data");

	m_EnemySprite.Create("data\\ƒ†ƒjƒbƒg\\1429010402.png");

	m_max_life = 250;

	m_pData->SetEnemyHp(m_max_life);
}