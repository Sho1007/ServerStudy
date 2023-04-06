#pragma once
#include <string>
enum class ECharacterType
{
	None,
	Player,
	Monster,
	Size
};

class Character
{
public:
	Character(std::string _Name, int _PositionY, int _PositionX, float _HP = 100.0f, float _MP = 100.0f, ECharacterType _CharacterType = ECharacterType::None);

	virtual void Move(char InputDirection);
	virtual void Attack(int TargetY, int TargetX, int** Board);

protected:
	std::string Name;
	float HP;
	float MP;
	ECharacterType CharacterType;
	int PositionY, PositionX;
};

