#pragma once
class ISave{
private:
	virtual void SaveToFile()=0;
	virtual void LoadFromFile()=0;
};