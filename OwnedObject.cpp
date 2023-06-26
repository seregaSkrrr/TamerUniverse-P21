#include "OwnedObject.h"

Owner OwnedObject::GetOwner()
{
	return _owner;
}

void OwnedObject::SetOwner(Owner _owner)
{
	this->_owner = _owner;
}
