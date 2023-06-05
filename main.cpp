#include <iostream>
#include "Save.h"
#include "pugixml.hpp"

using namespace std;
using namespace pugi;

int main(){
    Save Top;
    Top.LoadFromFile();
    Top.SaveToFile();

    return 0;
}