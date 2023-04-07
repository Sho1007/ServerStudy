#include <iostream>
#include <random>
#include <chrono>
#include <set>
using namespace std;

set<int> BallBox;

int main()
{
	// 난수 생성 파트
	int StartNum = 1, EndNum = 45, BallCount = 6;
	random_device RD;

	mt19937 gen(RD());

	uniform_int_distribution<int> dis(StartNum, EndNum);


	// 공 BallCount까지 집어넣기
	while (BallBox.size()  < BallCount)
	{
		BallBox.insert(dis(gen));
	}

	// 공 출력
	for (int Ball : BallBox)
	{
		cout << Ball << ' ';
	}
	cout << '\n';

	return 0;
}