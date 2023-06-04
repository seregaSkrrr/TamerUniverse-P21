#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "ISave.h"
using namespace std;

class Save/* : public ISave */{
public:
	void SaveToFile();
	void LoadFromFile();
};