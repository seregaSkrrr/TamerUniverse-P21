#pragma once
#include "IgameEngine.h"
class GameEngine : public IGameEngine{
private:
	void SaveMenu();
	void StatusEmpire();
	void EnteringCommands();
	void OrganizationBattle();
public:
	void StartGame();
};

