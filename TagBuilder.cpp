#include "TagBuilder.h"

char* TagBuilder::BuildDefaultString() {
	const char* Default = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\r\n";
	char* Addition = BuildUniverse();
	stringstream Streamer;
	Streamer << Default << Addition;
	char* Ending = (char*)Streamer.str().c_str();
	return(char*)Ending;
}

char* TagBuilder::BuildUniverse()
{
	srand(time(NULL));
	string Turns[3] = { "First", "Second", "Third" };
	const char* Universe = "<Universe>\r\n";
	const char* EndOfUniverse = "</Universe>\r\n";
	char* FirstAddition = BuildTurn(Turns[rand()%2]);
	char* SecondAddition = BuildPlanets();
	stringstream Streamer;
	Streamer << Universe << FirstAddition << SecondAddition << EndOfUniverse;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}

char* TagBuilder::BuildTurn(string Turn)
{
	const char* WTurn = "<Turn>\r\n";
	const char* EndOfTurn = "</Turn>\r\n";
	stringstream Streamer;
	Streamer << WTurn << EndOfTurn;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}

char* TagBuilder::BuildPlanets()
{
	const char* Planets = "<Planets>\r\n";
	const char* EndOfPlanets = "</Planets>\r\n";
	char* FirstAddition = BuildPlanet();
	stringstream Streamer;
	Streamer << Planets << FirstAddition <<EndOfPlanets;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}

char* TagBuilder::BuildPlanet()
{
	string Owners[3] = { "First", "Second", "Netral" };
	string ID[5] = { "Jupiter", "Earth", "Mars", "Merkuriy", "Venera"};
	const char* Planet = "<Planet>\r\n";
	const char* EndOfPlanet = "</Planet>\r\n";
	char* FirstAddition = BuildFleet();
	char* SecondAddition = BuildOwner(Owners[rand() % 2]);
	char* ThirdAddition = BuildID(ID[rand()%4]);
	stringstream Streamer;
	Streamer << Planet << FirstAddition << SecondAddition << ThirdAddition << EndOfPlanet;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}

char* TagBuilder::BuildFleet()
{
	int Ships[5];
	for (int i = 0; i < 5; i++) {
		Ships[i] = rand() % 10;
	}
	const char* Fleet = "<Fleet>\r\n";
	const char* EndOfFleet = "</Fleet>\r\n";
	char* FirstAddition = BuildShip(Ships[rand()%4]);
	stringstream Streamer;
	Streamer << Fleet << FirstAddition << EndOfFleet;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}

char* TagBuilder::BuildShip(int count)
{
	const char* Ship = "<Ship>\r\n";
	const char* EndOfShip = "</Ship>\r\n";
	stringstream Streamer;
	Streamer << Ship << count<< EndOfShip;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}

char* TagBuilder::BuildOwner(string owner)
{
	const char* Owner = "<Owner>\r\n";
	const char* EndOfOwner = "</Owner>\r\n";
	stringstream Streamer;
	Streamer << Owner << owner<< EndOfOwner;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}

char* TagBuilder::BuildID(string id)
{
	const char* ID = "<ID>\r\n";
	const char* EndOfID = "</ID>\r\n";
	stringstream Streamer;
	Streamer << ID << id << EndOfID;
	char* Ending = (char*)Streamer.str().c_str();
	return (char*)Ending;
}