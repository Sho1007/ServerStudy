#include "Monster.h"

Monster::Monster(int _PositionY, int _PositionX, float _HP, float _MP)
	: Character(_PositionY, _PositionX, _HP, _MP, ECharacterType::Monster)
{
}
