#pragma once
class ISave{
	virtual void SaveToFile(const string fileName = "default.save");		
	virtual void LoadFromFile(const string fileName = "default.save");		//виртуальные функции
};
