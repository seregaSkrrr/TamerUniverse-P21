//#include "Save.h"
#pragma warning(disable : 4996)
// 
//void SaveLoadEngine::SaveToFile() {
// 
//}
//
//void SaveLoadEngine::LoadFromFile() {
//	ofstream in;
//	in.open("Universe.xml", ios::app);
//	const char* Data = "Universe.xml";
//	char buffer[100];
//	FILE* FileManager = fopen(Data, "r+b");
//	while ((fgets(buffer, 100, FileManager)) != NULL)
//	{
//		printf("%s", buffer);
//	}
//	fclose(FileManager);
//}



#include "SaveLoadEngine.h"

void SaveLoadEngine::SaveToFile(){
	ofstream in;
	in.open("Universe.xml", ios::app);
	const char* Data;
	Data = "Let's go";
	in << Data << endl;
}

void SaveLoadEngine::LoadFromFile(){
	ofstream in;
	in.open("Universe.xml", ios::app);
	const char* Data = "Universe.xml";
	char buffer[100];
	FILE* FileManager = fopen(Data, "r+b");
	while ((fgets(buffer, 100, FileManager)) != NULL)
	{
		cout << buffer;
	}
	fclose(FileManager);
}
