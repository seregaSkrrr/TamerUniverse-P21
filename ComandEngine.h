#pragma once
#include "IComandEngine.h"
class ComandEngine :public IComandEngine{
  private:
void BuildShip(int attack,int shield);
void SendFleet(int targetPlanetId);
  public:
void WelcomeMessage();
void ShowHelp();

};
