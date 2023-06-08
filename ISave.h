#pragma once
class ISaveLoadEngine {
private:
	virtual void SaveToFile() = 0;
	virtual void LoadFromFile() = 0;
};