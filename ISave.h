#pragma once
class ISave{
	virtual void Uploadfile();		
	virtual void LoadFromFile(const string fileName = "default.save");		//виртуальные функции
};
