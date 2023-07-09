#include "pch.h"
#include "CppUnitTest.h"
#include <fstream>
#include <iostream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SaveLoadEngineTests
{
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
