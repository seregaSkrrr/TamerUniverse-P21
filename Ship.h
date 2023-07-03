#pragma once
#include "OwnedObject.h"
class Ship : public OwnedObject
{
private:
	int _attack = 0;
	int _defense = 0;

public:
	int GetAttack(int Attack);
	void SetAttack(int Attack);
	int GetDefense(int Defense);
	void SetDefense(int Defense);
};

