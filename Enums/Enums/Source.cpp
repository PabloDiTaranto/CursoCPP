#include <iostream>
#include <String>

using namespace std;


enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MovementStatus
{
	MS_Crouched,
	MS_Running,
};

int main()
{
	PlayerStatus status;

	status = PS_Crouched;

	if (status == PS_Crouched)
	{
		cout << "The Player is crouched" << endl;
	}

	status = PlayerStatus::PS_Running;

	if (status == PS_Crouched)
	{
		cout << "The Player is crouched" << endl;
	}
	else 
	{
		cout << "The Player is not crouched" << endl;
	}


	system("pause");
}