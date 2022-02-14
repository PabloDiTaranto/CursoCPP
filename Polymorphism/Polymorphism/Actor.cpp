#include "Actor.h"
#include <iostream>
using namespace std;

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called.\n\n";
}

void Actor::ActorFunc()
{
	cout << "ActorFunc() Called\n\n";
}