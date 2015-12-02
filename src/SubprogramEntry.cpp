#include "SubprogramEntry.hpp"

SubprogramEntry::SubprogramEntry() {

}

SubprogramEntry::SubprogramEntry(string returnType) {
	this->returnType = returnType;
}

void SubprogramEntry::addParameterType(string type) {
	parametersType.push_back(type);
}

void SubprogramEntry::setReturnType(const string &type) {
	this->returnType = type;
}

string SubprogramEntry::getReturnType() {
	return returnType;
}

void SubprogramEntry::setParametersType(list<string> l) {
	parametersType = l;
}

const list<string>& SubprogramEntry::getParametersType() {
	return parametersType;
}
