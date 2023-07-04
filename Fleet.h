#include <list>
#include <iostream>
#include "Ship.h"
#include "OwnedObject.h"
using namespace std;
class Fleet:public OwnedObject{
private:
	list<Ship> _ships;
public:
	int AddShip(Ship ship);
};