#pragma once
class ISave {
public:
	virtual void SaveToFile()=0;		//���������� ������ �� ������ IDataModel � xml ���� 
	virtual void LoadFromFile()=0;		//��������� ������ �� xml �����
};