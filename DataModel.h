#pragma once
#include "IDataModel.h"
#include "Planet.h"
#include "Ship.h"
#include "Fleet.h"
class DataModel : public IDataModel
{
	Fleet Player1Fleet;
	Fleet Player2Fleet;
	Planet* planets;
public:
	void SendShip(int planetIndex);
	void BuildShip(int shield, int attack);
	void StartTurn();
	void EndTrun();
};