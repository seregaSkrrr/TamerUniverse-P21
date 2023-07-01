#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <iostream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SaveLoadEngineTests
{
	TEST_CLASS(FileManagerTests)
	{
	public:
		
		TEST_METHOD(OpenFileTest)
		{
			ofstream File;
			File.open("Universe.xml", ios::app);
		}
		TEST_METHOD(ReadFileTest)
		{
			ofstream File;
			char const* Data = "Universe.xml";
			char buffer[100];
			#pragma warning(disable : 4996)
			FILE* FileManager = fopen(Data, "r+b");
			while ((fgets(buffer, 100, FileManager)) != NULL) {
				cout << buffer;
			}
		}
		TEST_METHOD(WriteFileTest)
		{
			const char* Data = "<Universe>";
			ofstream File("Universe.xml", ios::app);
			File << Data << endl;
		}
		TEST_METHOD(CloseFileTest)
		{
			ofstream File;
			File.close();
		}
	};
	TEST_CLASS(TagBuilderTests)
	{
	public:

		TEST_METHOD(BuildFileTest)
		{
			ofstream File;
			File << "<?xml version=\"1.0\" encoding=\"utf-8\"?>\r\n";
			BuildUniverseTest();
		}
		TEST_METHOD(BuildUniverseTest)
		{
			ofstream File;
			File << "<Universe>";
			BuildTurnTest();
			BuildPlanetsTest();
			File << "</Universe>";
		}
		TEST_METHOD(BuildTurnTest)
		{
			ofstream File;
			char* Turn = "SecondPlayer";
			File << "<Turn>" << Turn << "</Turn>";
		}
		TEST_METHOD(BuildPlanetsTest)
		{
			ofstream File;
			File << "<Planets>";
			BuildPlanetTest();
			File << "</Planets>";
		}
		TEST_METHOD(BuildPlanetTest)
		{
			ofstream File;
			File << "<Planet>";
			BuildFleetTest();
			BuildOwnerTest();
			BuildIDTest();
			File << "</Planet>";
		}
		TEST_METHOD(BuildFleetTest)
		{
			ofstream File;
			File << "<Fleet>";
			BuildShipTest();
			File << "</Fleet>";
		}
		TEST_METHOD(BuildShipTest)
		{
			ofstream File;
			int Ship=0;
			File << "<Ship>" << Ship << "</Ship>";
		}
		TEST_METHOD(BuildOwnerTest)
		{
			ofstream File;
			char* Owner = "FirstPlayer";
			File << "<Owner>"<< Owner << "</Owner>";
		}
		TEST_METHOD(BuildIDTest)
		{
			ofstream File;
			char* ID = "Jupiter";
			File << "<ID>" << ID << "</ID>";
		}
	};
	TEST_CLASS(SaveLoadEngineTests)
	{
	public:

		TEST_METHOD(LoadFromFileTest)
		{
			FileManagerTests File;
			File.OpenFileTest();
			File.ReadFileTest();
			File.CloseFileTest();
		}
		TEST_METHOD(SaveToFileTest)
		{
			FileManagerTests File;
			File.OpenFileTest();
			File.WriteFileTest();
			File.CloseFileTest();
		}
	};
}
