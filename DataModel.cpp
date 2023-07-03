#include <iostream>
#include "DataModel.h"

void DataModel::SendShip(int planetIndex)
{

}

void DataModel::BuildShip(int shield, int attack)
{

}

void DataModel::StartTurn()
{

}

void DataModel::EndTrun(int planets)
{
	int n = rand() % 10 + 5;
	for(int planet = 0; planet < n;planet++)
	_planets[planet].EndTrun();
}
