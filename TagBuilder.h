#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#pragma once

class TagBuilder {
public:
	char* BuildDefaultString();
	char* BuildUniverse();
	char* BuildTurn(string Turn);
	char* BuildPlanets();
	char* BuildPlanet();
	char* BuildFleet();
	char* BuildShip(int count);
	char* BuildOwner(string owner);
	char* BuildID(string id);

};
