#include "TagBuilder.h"

void TagBuilder::WriteTag(const char* Tag) {
	cout << "<" << Tag << ">";
}

const char* TagBuilder::WriteDefaultString(){
	const char* Data = "<?xml version=\"1.0\" encoding=\"utf - 8\"?>";
	return Data;
}