#include "VariableEntry.hpp"

VariableEntry::VariableEntry(string type) {
	this->type = type;
}

string VariableEntry::getType() {
	return type;
}

void VariableEntry::setType(string type) {
	this->type = type;
}
