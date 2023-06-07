#include "ISave.h"
#include <iostream>
#include <fstream>
using namespace std;

class Save : public ISave {
private:
	void WriteTag(char* Tag);
	void TagUniverse();
	void WriteTurn();
	void WriteShip();
	void WriteFleet();
	void WritePlanet();
	void WritePlanets();
	void WriteUniverse();
public:
	void SaveToFile();
	void LoadFromFile();
};