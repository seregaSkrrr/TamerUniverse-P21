#pragma once
#include <string>
class ISave {
public:
	virtual void SaveToFile(const string FileName = "default.save") = 0;		//���������� ������ �� ������ IDataModel � xml ���� 
	virtual void LoadFromFile(const string FileName = "default.save") = 0;		//��������� ������ �� xml �����
};