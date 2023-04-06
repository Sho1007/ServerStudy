#pragma once
#include "Monster.h"
class Slime : public Monster
{
public:
	Slime(int _PositionY, int _PositionX, float _HP = 100.0f, float _MP = 100.0f);
};

