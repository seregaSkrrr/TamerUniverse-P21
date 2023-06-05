#pragma once
#include "IComandEngine.h"
class ComandEngine :public IComandEngine{

	void FinishTurn();
	void ShowUniverseStatus();
	void SendFleet();
	void BuildShip();
	void ComandEng();

};
