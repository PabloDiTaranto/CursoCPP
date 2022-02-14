#include <iostream>
#include <string>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();
};


class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	//Object* obj = new Object;
	//obj->BeginPlay();


	//Actor* actor = new Actor;
	//actor->BeginPlay();

	Pawn* pawn = new Pawn;
	pawn->BeginPlay();

	//delete obj;
	//delete actor;
	delete pawn;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called.\n";
}

void Actor::BeginPlay()
{
	Object::BeginPlay();
	cout << "Actor BeginPlay() called.\n";
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called.\n";
	Actor::BeginPlay();
}