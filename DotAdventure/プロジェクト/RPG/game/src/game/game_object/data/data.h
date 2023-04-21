#pragma once
#include "aqua.h"
#include "../Inventory/Inventory.h"

class CInventory;

class CData
	: public aqua::IGameObject
{
public:
	CData(aqua::IGameObject* parent);
	~CData() = default;

	void Initialize(void) override;

	void Finalize(void) override;

	void SetGoldCount(int gold_count);

	int GetGoldCount()const;

	void SetKeyCount(int key_count);

	int GetKeyCount()const;

	void SetHealPotionCount(int Heal_Potion);

	int GetHealPotionCount()const;

	void SetHp(int hp);

	int GetHp()const;

	void SetEnemyHp(int enemy_hp);

	int GetEnemyHp()const;

	void SetMp(int mp);

	int GetMp()const;

	void SetBossFlag(bool boss_flag);

	bool GetBossFlag()const;

	void SetCharaPos(aqua::CVector2 chara_pos);

	aqua::CVector2 GetCharaPos()const;

private:
	
	int m_GoldCount; //���̐�
	int m_KeyCount; //���̐�
	int m_HealPotionCount; //�񕜖�̐�

	int m_Hp; //�L������HP
	int m_EnemyHp; //�{�X��HP
	int m_Mp; //�L������MP

	bool m_BossFlag; //�{�X�ɐG��Ă��邩�̔��f�t���b�O

	aqua::CVector2 m_CharaPos; //�L�����̈ʒu
	aqua::CVector2 m_BossPos; //�{�X�̈ʒu
};