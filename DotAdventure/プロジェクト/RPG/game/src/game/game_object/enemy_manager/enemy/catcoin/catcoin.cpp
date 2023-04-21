#include "catcoin.h"

/*
 *  コンストラクタ
 */
CCatCoin::
CCatCoin(aqua::IGameObject* parent)
	: IEnemy(parent, "CatCoin")
{
}

/*
 *  初期化
 */
void
CCatCoin::
Initialize(void)
{
	m_pData = (CData*)aqua::FindGameObject("Data");

	m_EnemySprite.Create("data\\ユニット\\1538020401.png");

	m_max_life = 80;

	m_pData->SetEnemyHp(m_max_life);
}