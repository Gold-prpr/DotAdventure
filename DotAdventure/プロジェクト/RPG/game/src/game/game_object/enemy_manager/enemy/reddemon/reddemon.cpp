#include "reddemon.h"

/*
 *  �R���X�g���N�^
 */
CRedDemon::
CRedDemon(aqua::IGameObject* parent)
	: IEnemy(parent, "RedDemon")
{
}

/*
 *  ������
 */
void
CRedDemon::
Initialize(void)
{
	m_pData = (CData*)aqua::FindGameObject("Data");

	m_EnemySprite.Create("data\\���j�b�g\\1517010402.png");

	m_max_life = 60;

	m_pData->SetEnemyHp(m_max_life);
}