#pragma once
#include <string>

class FTransition
{
public:
	FTransition();
	FTransition(int NewCurrentState, std::string NewCondition, int NewNextState);
	int CurrentState;
	std::string Condition;
	int NextState;
};

