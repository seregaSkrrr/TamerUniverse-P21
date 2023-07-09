#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

class FileManager {
private:
	ofstream File;
public:
	void OpenFile();
	void ReadFile();
	void WriteFile(const char* Data);
	void CloseFile();
};