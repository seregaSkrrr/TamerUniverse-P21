#pragma once
#include "IGameEngine.h"
class GameEngine : public IGameEngine
{
#include "IGameEngine.h"
	class GameEngine : public IGameEngine {
	private:
		void SaveMenu();
		void StatusEmpire();
		void CommandEnter();
		void StartBattle();
	public:
		void StartGame();
	};
