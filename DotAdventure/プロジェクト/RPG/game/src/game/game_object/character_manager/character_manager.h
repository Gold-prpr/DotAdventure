#pragma once
#include "aqua.h"
#include "../character/character.h"

class CCharacter;

class CCharacterManager
	:public aqua::IGameObject
{
public:
	CCharacterManager(aqua::IGameObject* parent);
	~CCharacterManager() = default;

	void Initialize(void) override;

	void Update(void) override;

	void Draw(void) override;

	void Finalize(void) override;

	CCharacter* GetCharacter(void);

private:
	CCharacter* m_pChara;

};