#pragma once
#include "Monster.h"
class Goblin : public Monster
{
public:
	Goblin(int _PositionY, int _PositionX, float _HP = 100.0f, float _MP = 100.0f);
};

