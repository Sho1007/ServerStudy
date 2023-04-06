#include "Monster.h"

Monster::Monster(std::string _Name, int _PositionY, int _PositionX, float _HP, float _MP)
	: Character(_Name, _PositionY, _PositionX, _HP, _MP, ECharacterType::Monster)
{
}
