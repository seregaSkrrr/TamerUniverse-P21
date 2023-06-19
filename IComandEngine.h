#pragma once
class IComandEngine {
public:
    virtual void SendFleet(int targetPlanetId) = 0;
    virtual void BuildShip(int attack,int shield) = 0;
    virtual void ShowUniverseStatus() = 0;
    virtual void FinishTurn() = 0;
    virtual void StartEngine() = 0;
    virtual void WelcomeMessage() = 0;
    virtual void ShowHelp() = 0;
};
