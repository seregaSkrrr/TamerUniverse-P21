#pragma once
#include "IComandEngine.h"
class ComandEngine :public IComandEngine{
private:
	void BuildShip(int attack,int shield);
	void SendFleet(int targetPlanetId);
	void ShowUniverseStatus();
	void FinishTurn();
	void ShowWelcomeMessage();
	void ShowHelp();
public:
	void StartEngine();


};
