#pragma once
#include "Character.h"
class Monster : public Character
{
public:
	Monster(int _PositionY, int _PositionX, float _HP = 100.0f, float _MP = 100.0f);
};

