#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;
#pragma once

class TagBuilder {
public:
	char* BuildFile();
	char* BuildUniverse();
	char* BuildTurn();
	char* BuildPlanets();
	char* BuildPlanet();
	char* BuildFleet();
	char* BuildShip();
	char* BuildOwner();
	char* BuildID();

};