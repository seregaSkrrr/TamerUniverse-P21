#include <list>
#include <iostream>
#include "Ship.h"
#include "OwnedObject.h"
using namespace std;
class Fleet:public OwnedObject{
private:
	list<Ship> ships;
public:
	int AddShip(int ID);
};