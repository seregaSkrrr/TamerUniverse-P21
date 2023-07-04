#pragma once
#include "IDataModel.h"
#include "Planet.h"
#include "Ship.h"
#include "Fleet.h"
class DataModel : public IDataModel
{
	Fleet _player1Fleet;
	Fleet _player2Fleet;
	Planet* _planets;
public:
	void SendShip(int planetIndex);
	void BuildShip(int shield, int attack);
	void StartTurn();
	void EndTrun(int planetss);
};