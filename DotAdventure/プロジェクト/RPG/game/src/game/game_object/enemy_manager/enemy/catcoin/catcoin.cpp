#include "catcoin.h"

/*
 *  �R���X�g���N�^
 */
CCatCoin::
CCatCoin(aqua::IGameObject* parent)
	: IEnemy(parent, "CatCoin")
{
}

/*
 *  ������
 */
void
CCatCoin::
Initialize(void)
{
	m_pData = (CData*)aqua::FindGameObject("Data");

	m_EnemySprite.Create("data\\���j�b�g\\1538020401.png");

	m_max_life = 80;

	m_pData->SetEnemyHp(m_max_life);
}