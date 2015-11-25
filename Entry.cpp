#include "Entry.hpp"

Entry::Entry(int type) {
	this->type = type;
}

int Entry::getType() {
	return type;
}

void Entry::setType(int type) {
	this->type = type;
}