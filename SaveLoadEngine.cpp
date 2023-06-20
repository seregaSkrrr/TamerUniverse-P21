#pragma warning(disable : 4996)
#include "SaveLoadEngine.h"
#include "FileManager.h"
#include "TagBuilder.h"

void SaveLoadEngine::SaveToFile() {
	//FileManager File;
	//TagWriter Tager;
	//const char* Data = Tager.WriteTag("Universe");
	//File.OpenFile();
	//File.WriteFile(Data);
	//File.CloseFile();
}

void SaveLoadEngine::LoadFromFile() {
	FileManager File;
	File.OpenFile();
	File.ReadFile();
	File.CloseFile();
}