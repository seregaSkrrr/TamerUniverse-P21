#include "Ship.h"
#include "OwnedObject.h"
class Fleet:public OwnedObject{
public:
	Ship** Fleet;
};