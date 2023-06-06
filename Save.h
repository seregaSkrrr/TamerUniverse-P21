#pragma once
#include "ISave.h"
#include <iostream>
#include "pugixml.hpp"
using namespace std;
using namespace pugi;

class Save : public ISave {
public:
	void SaveToFile(IDataModel DataModel);
	void LoadFromFile(IDataModel DataModel);
};
