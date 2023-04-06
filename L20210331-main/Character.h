#pragma once
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
	Character(int _PositionY, int _PositionX, float _HP = 100.0f, float _MP = 100.0f, ECharacterType _CharacterType = ECharacterType::None);

	void Move(char InputDirection);
	void Attack(int TargetY, int TargetX, int** Board);

protected:
	float HP;
	float MP;
	ECharacterType CharacterType;
	int PositionY, PositionX;
};

