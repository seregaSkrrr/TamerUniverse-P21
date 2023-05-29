#pragma once
#include "IDataModel.h"
class DataModel : public IDataModel
{
protected:
	int Planets = 2;
	int Shifts = 0;
public:
	void UploadData();
	void LoadData();
};

