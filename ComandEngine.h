#pragma once
#include "IComandEngine.h"
class ComandEngine :public IComandEngine{

	virtual void FinishTurn();
	virtual void ShowUniverseStatus();
	virtual void SendFleet();
	virtual void BuildShip();
	virtual void ComandEng();

};