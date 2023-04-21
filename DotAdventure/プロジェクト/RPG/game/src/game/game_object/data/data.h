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
	
	int m_GoldCount; //金の数
	int m_KeyCount; //鍵の数
	int m_HealPotionCount; //回復薬の数

	int m_Hp; //キャラのHP
	int m_EnemyHp; //ボスのHP
	int m_Mp; //キャラのMP

	bool m_BossFlag; //ボスに触れているかの判断フラッグ

	aqua::CVector2 m_CharaPos; //キャラの位置
	aqua::CVector2 m_BossPos; //ボスの位置
};