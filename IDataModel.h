#pragma once
class IDataModel
{
public:
	virtual void SendFleet(int planetIndex);
	virtual void BuildShip(int shield, int attack);
	virtual void StartTurn();
	virtual void EndTruen();
};

