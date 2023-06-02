#pragma once
#include "ISave.h"
class Save : public ISave{
	void Save::SaveToFile(IDataModel dataModel) {

}
	void LoadFile();			//функция будет запрашивать переменные соответствующие составу игры: корабли, планеты и т.д. Будет их записывать в текстовый файл (приложенный в папке с этим проектом) и менять данные переданные в функцию.
