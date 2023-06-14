#pragma once
#include "IGameEngine.h"
class GameEngine : public IGameEngine
{
#include "IGameEngine.h"
	class GameEngine : public IGameEngine {
	private:
		void SaveMenu();
		void StatusEmpire();
		void EnterSaveCommand();
		void StartBattle();
	public:
		void StartGame();
	};
