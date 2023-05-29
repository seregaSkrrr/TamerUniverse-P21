#pragma once
#include "IDataModel.h"
#include "Planets.h"
#include "Shifts.h"
class DataModel : public IDataModel
{
	Planets planets;
	Shifts shifts;
	
};