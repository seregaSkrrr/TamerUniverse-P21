#pragma once
#include "IDataModel.h"
#include "Planet.h"
#include "Ship.h"
class DataModel : public IDataModel
{
	Planet planets;
	Ship ship;
public:
	void SaveUniversData();
};