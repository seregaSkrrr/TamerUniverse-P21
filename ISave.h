#pragma once
class ISave {
public:
	virtual void SaveToFile(const string FileName = "default.save")=0;		//записывает данные из класса IDataModel в xml файл 
	virtual void LoadFromFile(const string FileName = "default.save")=0;		//считывает данные из xml файла
};
