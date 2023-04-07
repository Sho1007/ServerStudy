#include <iostream>
#include <random>
#include <chrono>
#include <set>
using namespace std;

set<int> BallBox;

int main()
{
	// ���� ���� ��Ʈ
	int StartNum = 1, EndNum = 45, BallCount = 6;
	random_device RD;

	mt19937 gen(RD());

	uniform_int_distribution<int> dis(StartNum, EndNum);


	// �� BallCount���� ����ֱ�
	while (BallBox.size()  < BallCount)
	{
		BallBox.insert(dis(gen));
	}

	// �� ���
	for (int Ball : BallBox)
	{
		cout << Ball << ' ';
	}
	cout << '\n';

	return 0;
}