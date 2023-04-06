#include "Character.h"

Character::Character(int _PositionY, int _PositionX, float _HP, float _MP, ECharacterType _CharacterType)
	: HP(_HP), MP(_MP), CharacterType(_CharacterType), PositionY(_PositionY), PositionX(_PositionX)
{
}

void Character::Move(char InputDirection)
{
}

void Character::Attack(int TargetY, int TargetX, int** Board)
{
}
