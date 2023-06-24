#include "TagBuilder.h"
#include <string>
#include <string.h>

char* TagBuilder::BuildFile() {
	char* Ending = new char(10);
	Ending[0] = 0;
	const char* Default = "<?xml version=\"1.0\"encoding=\"utf-8\"?>\r\n";
	char* Addition = BuildUniverse();
	strcat_s(Ending, sizeof(char) * 10, Default);
	strcat_s(Ending, sizeof(char) * 10, Addition);
	return (char*)Ending;
}

char* TagBuilder::BuildUniverse()
{
	char* Ending = new char(100);
	Ending[0] = 0;
	const char* Universe = "<Universe>\r\n";
	const char* EndOfUniverse = "</Universe>\r\n";
	char* FirstAddition = BuildTurn();
	char* SecondAddition = BuildPlanets();
	strcat_s(Ending, sizeof(char) * 10, Universe);
	strcat_s(Ending, sizeof(char) * 10, SecondAddition);
	strcat_s(Ending, sizeof(char) * 10, FirstAddition);
	strcat_s(Ending, 1000, EndOfUniverse);
	return (char*)Ending;
}

char* TagBuilder::BuildTurn()
{
	return (char*)" ";
}

char* TagBuilder::BuildPlanets()
{
	return (char*)" ";
}

char* TagBuilder::BuildPlanet()
{
	return (char*)" ";
}

char* TagBuilder::BuildFleet()
{
	return (char*)" ";
}

char* TagBuilder::BuildShip()
{
	return (char*)" ";
}

char* TagBuilder::BuildOwner()
{
	return (char*)" ";
}

char* TagBuilder::BuildID()
{
	return (char*)" ";
}
                                             