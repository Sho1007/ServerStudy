#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player(std::string _Name, int _PositionY, int _PositionX, float _HP = 100.0f, float _MP = 100.0f);
};

