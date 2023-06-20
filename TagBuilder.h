#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#pragma once

class TagBuilder {
public:
	void WriteTag(const char* Tag);
	const char* WriteDefaultString();
	void WriteUniverse();
	void WriteTurn();
	void WritePlanets();
	void WritePlanet();
	void WriteFleet();
	void WriteShip();
	void WriteOwner();
	void WriteID();

};
