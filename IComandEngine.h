#pragma once

class IComandEngine {
public:

	virtual void FinishTurn();
	virtual void ShowUniverseStatus();
	virtual void SendFleet();
	virtual void BuildShip();
	virtual void ComandEng();

};
