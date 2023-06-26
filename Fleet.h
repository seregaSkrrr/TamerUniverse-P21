#include "Ship.h"
#include "OwnedObject.h"
using namespace std;
class Fleet:public OwnedObject{
public:
	Ship* Ships;
};