#include <iostream>
#include <String>

using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching

};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchOnInt(int i);

int main()
{
	int integer = 5;

	SwitchOnInt(integer);


	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	switch (P_Status)
	{
	case PS_Running:
		speed = RunSpeed;
		break;

	case PS_Walking:
		speed = WalkSpeed;
		break;

	case PS_Crouching:
		speed = CrouchSpeed;
	}
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number was 0" << endl;
		break;

	case 1:
		cout << "Your number was 1" << endl;
		break;

	case 2:
		cout << "Your number was 2" << endl;
		break;

	default:
		cout << "Your number was not 0, 1 or 2" << endl;
		break;
	}
}

