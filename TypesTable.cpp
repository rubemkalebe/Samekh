#include "TypesTable.hpp"

TypesTable::TypesTable() {
  types.push_back("auto");
  types.push_back("bool");
  types.push_back("float");
  types.push_back("int");
  types.push_back("long");
  types.push_back("string");
}

bool TypesTable::contains(string type) {
  for(list<string>::iterator it = types.begin(); it != types.end(); it++) {
    if(type.compare(*it) == 0) {
      return true;
    }
  }
  return false;
}

void TypesTable::insert(string type) {
  types.push_back(type);
}
