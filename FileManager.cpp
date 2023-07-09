#pragma warning(disable : 4996)
#include "FileManager.h"

void FileManager::OpenFile() {
	File.open("Universe.xml", ios::app);
}

void FileManager::ReadFile() {
	const char* Data = "Universe.xml";
	char buffer[100];
	FILE* FileManager = fopen(Data, "r+b");
	while ((fgets(buffer, 100, FileManager)) != NULL) {
		cout << buffer;
	}
}

void FileManager::WriteFile(const char* Data) {
	File << Data << endl;
}

void FileManager::CloseFile() {
	File.close();
}
