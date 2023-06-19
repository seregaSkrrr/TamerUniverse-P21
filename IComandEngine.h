#pragma once
class IComandEngine {
private:
  virtual void SendFleet(int targetPlanetId) = 0;
  virtual void BuildShip(int attack,int shield) = 0;
  virtual void ShowUniverseStatus() = 0;
  virtual void FinishTurn() = 0;
public:
  virtual void WelcomeMessage() = 0;
  virtual void ShowHelp() = 0;
};
