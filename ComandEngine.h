#pragma once
#include "IComandEngine.h"
class ComandEngine :public IComandEngine{
	private:
		void FinishTurn();
	void ShowUniverseStatus();
public:
void SendFleet(int planetID); 
void BuildShip(int shield,int attack);
};
