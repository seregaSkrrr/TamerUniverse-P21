#pragma once
class ISave {
public:
	virtual void SaveToFile()=0;		//записывает данные из класса IDataModel в xml файл 
	virtual void LoadFromFile()=0;		//считывает данные из xml файла
};