#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

	float GetHealth();

	void TakeDamage(float dmg);


private:
	string Name;
	float Health;

protected:
	int NumberOfLimbs;

};

class Goblin : public Creature
{
public:
	Goblin();

	int GetNumberOfLimbs();
};

int main()
{
	Goblin Gobby;

	cout << Gobby.GetName() << endl;
	cout << Gobby.GetNumberOfLimbs() << endl;
	


	system("pause");
}

Creature::Creature()
{
	Health = 100.f;
	cout << "A creature has been created\n";
}

void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

float Creature::GetHealth()
{
	return Health;
}



void Creature::TakeDamage(float dmg)
{
	float Total;
	Total = Health - dmg;

	if (Total <= 0.f)
	{
		cout << GetName() << " has die\n";
	}
	else
	{
		Health -= dmg;
	}

	cout << "Health: " << Health << endl;
}

Goblin::Goblin()
{
	NumberOfLimbs = 5;

	SetName("Gobby");
}

int Goblin::GetNumberOfLimbs()
{
	return NumberOfLimbs;
}



