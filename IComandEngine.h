#pragma once
class IComandEngine {
virtual void FinishTurn();
	virtual void ShowUniverseStatus() = 0;
	virtual void SendFleet() = 0;
	virtual void BuildShip() = 0;
	virtual void ComandEng() = 0;
};