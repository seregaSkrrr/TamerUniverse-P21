#pragma once
#include "Owner.h"
class OwnedObject{
	Owner _owner;
public:
	Owner GetOwner();
	void SetOwner(Owner _owner);
};

