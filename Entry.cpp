#include "Entry.hpp"

Entry::Entry(string type) {
	this->type = type;
}

string Entry::getType() {
	return type;
}

void Entry::setType(string type) {
	this->type = type;
}
