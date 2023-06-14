#pragma once
class IComandEngine {
public:
        virtual void FinishTurn() = 0;
	virtual void ShowUniverseStatus() = 0;
	virtual void SendFleet(int planetID) = 0;
	virtual void BuildShip(int shield,int attack) = 0;
};
