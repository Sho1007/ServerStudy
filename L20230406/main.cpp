#include <iostream>
#include "State.h"
#include "Transition.h"

using namespace std;

int main()
{
	FState* State[4];
	FTransition* Transition[5];

	State[0] = new FState(1, "배회");
	State[1] = new FState(2, "추격");
	State[2] = new FState(3, "공격");
	State[3] = new FState(4, "죽음");

	Transition[0] = new FTransition(1, "적발견", 2);
	Transition[1] = new FTransition(2, "적놓침", 1);
	Transition[2] = new FTransition(2, "사정거리접근", 3);
	Transition[3] = new FTransition(3, "사정거리이탈", 2);
	Transition[4] = new FTransition(3, "HP없음", 4);

	int MonsterCurrentState = 1;
	std::string MonsterCondition = "적발견";
	int MonsterNextState;

	// Transition 을 전부 탐색
	for (int i = 0; i < 5; ++i)
	{
		// 몬스터의 현재 상태와 i번째 전이의 현재상태가 같고 && 몬스터의 현재 컨디션과 i번째 전이의 컨디션이 같은 경우
		if (Transition[i]->CurrentState == MonsterCurrentState && Transition[i]->Condition == MonsterCondition)
		{
			// 몬스터의 다음 상태는 i번째 전이의 다음 상태가 된다.
			MonsterNextState = Transition[i]->NextState;
		}
	}

	cout << "몬스터는 현재 [" << State[MonsterCurrentState - 1]->Name;
	cout << "] 상태이고, 몬스터가 [" << MonsterCondition << "] 을 해서 ";
	cout << "몬스터가 다음에 [" << State[MonsterNextState - 1]->Name << "] 상태가 됩니다.\n";
}