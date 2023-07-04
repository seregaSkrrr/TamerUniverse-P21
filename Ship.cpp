#include "Ship.h"


int Ship::GetAttack(int Attack)
{
	return Attack;
}

void Ship::SetAttack(int Attack)
{
	this->_attack = Attack;
}

int Ship::GetDefense(int Defense)
{
	return Defense;
}

void Ship::SetDefense(int Defense)
{
	this->_defense = Defense;
}
