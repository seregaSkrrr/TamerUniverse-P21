#pragma once
#include "IDataModel.h"
#include "Planet.h"
#include "Ship.h"
class DataModel : public IDataModel
{
	Planet planets;
	Ship ship; 
public:
	void SendShip(int planetIndex);
	void BuildShip(int shield, int attack);
	void StartTurn();
	void EndTruen();
};