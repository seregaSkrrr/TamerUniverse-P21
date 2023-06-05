#pragma once
class ISave{
public:
	virtual void SaveToFile()=0;
	virtual void LoadFromFile()=0;
};
