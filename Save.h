#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include "ISaveLoadEngine.h"
using namespace std;

class SaveLoadEngine : public ISaveLoadEngine {
//private:
//	
public:
	void SaveToFile();
	void LoadFromFile();
};