#pragma once
#include "OwnedObject.h"
#include "Fleet.h"

class Planet : public OwnedObject
{
private:
	int _turnsToBiuld = -1;
	int _fleetOnOrbit = 0;
	Fleet _fleet;
public:
	void TurnsToBuild(int Ship);

	void EndTrun();
};

