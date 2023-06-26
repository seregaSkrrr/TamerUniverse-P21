#pragma once
#include "OwnedObject.h"
class Planet : public OwnedObject
{
private:
	int _turnsToBiuld = -1;
	int _fleetOnOrbit = 0;
	int _fleet = 0;
public:
	void TurnsToBuild(int Ship);

	void EndTrun();
};

