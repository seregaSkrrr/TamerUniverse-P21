#pragma once
#include "OwnedObject.h"
class Planet : public OwnedObject
{
private:
	int _turnsToBiuld = -1;
	int _shipOnBuild = -1;
	int _fleetOnOrbit = -1;

};

