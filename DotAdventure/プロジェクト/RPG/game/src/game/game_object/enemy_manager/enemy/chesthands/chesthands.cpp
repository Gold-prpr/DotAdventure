#include "chesthands.h"

/*
 *  コンストラクタ
 */
CChestHands::
CChestHands(aqua::IGameObject* parent)
	: IEnemy(parent, "ChestHands")
{
}

/*
 *  初期化
 */
void
CChestHands::
Initialize(void)
{
	m_pData = (CData*)aqua::FindGameObject("Data");

	m_EnemySprite.Create("data\\ユニット\\1475010402.png");

	m_max_life = 100;

	m_pData->SetEnemyHp(m_max_life);
}