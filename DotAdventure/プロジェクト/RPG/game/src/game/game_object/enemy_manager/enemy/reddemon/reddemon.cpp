#include "reddemon.h"

/*
 *  コンストラクタ
 */
CRedDemon::
CRedDemon(aqua::IGameObject* parent)
	: IEnemy(parent, "RedDemon")
{
}

/*
 *  初期化
 */
void
CRedDemon::
Initialize(void)
{
	m_pData = (CData*)aqua::FindGameObject("Data");

	m_EnemySprite.Create("data\\ユニット\\1517010402.png");

	m_max_life = 60;

	m_pData->SetEnemyHp(m_max_life);
}