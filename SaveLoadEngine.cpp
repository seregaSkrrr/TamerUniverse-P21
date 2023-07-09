#pragma warning(disable : 4996)
#include "SaveLoadEngine.h"
#include "FileManager.h"
#include "TagBuilder.h"

void SaveLoadEngine::SaveToFile() {
	FileManager filemanager;
	TagBuilder tagbuilder;
	const char* Data = tagbuilder.BuildDefaultString();
	filemanager.OpenFile();
	filemanager.WriteFile(Data);
	filemanager.CloseFile();
}

void SaveLoadEngine::LoadFromFile() {
	FileManager filemanager;
	filemanager.OpenFile();
	filemanager.ReadFile();
	filemanager.CloseFile();
}
