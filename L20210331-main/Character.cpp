#include "Character.h"

Character::Character(std::string _Name, int _PositionY, int _PositionX, float _HP, float _MP, ECharacterType _CharacterType)
	: Name(_Name), HP(_HP), MP(_MP), CharacterType(_CharacterType), PositionY(_PositionY), PositionX(_PositionX)
{
}

void Character::Move(char InputDirection)
{
}

void Character::Attack(int TargetY, int TargetX, int** Board)
{
}
