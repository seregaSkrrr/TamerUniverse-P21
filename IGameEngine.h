#pragma once
class IGameEngine
{
private:
	virtual void SaveMenu();
	virtual void StatusEmpire();
	virtual void EnteringCommands();
	virtual void OrganizationBattle();
	virtual void StartGame();
};