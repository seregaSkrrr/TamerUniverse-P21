#pragma once
#include "ISave.h"
#include "IDataModel.h"
#include <iostream>

class Save : public ISave {
public:
	void SaveToFile(IDataModel DataModel);
	void LoadFromFile(IDataModel DataModel);
};
