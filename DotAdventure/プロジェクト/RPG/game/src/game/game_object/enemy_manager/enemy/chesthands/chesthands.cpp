#include "chesthands.h"

/*
 *  �R���X�g���N�^
 */
CChestHands::
CChestHands(aqua::IGameObject* parent)
	: IEnemy(parent, "ChestHands")
{
}

/*
 *  ������
 */
void
CChestHands::
Initialize(void)
{
	m_pData = (CData*)aqua::FindGameObject("Data");

	m_EnemySprite.Create("data\\���j�b�g\\1475010402.png");

	m_max_life = 100;

	m_pData->SetEnemyHp(m_max_life);
}