#include "Planet.h"

void Planet::TurnsToBuild(int Ship)
{
	this->_turnsToBiuld += Ship;
}

void Planet::EndTrun()
{
	this->_turnsToBiuld - 1;
}
