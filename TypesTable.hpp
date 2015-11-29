#ifndef TYPES_TABLE_HPP
#define TYPES_TABLE_HPP

#include <iostream>
#include <list>

using std::list;
using std::string;

class TypesTable {

private:

  list<string> types;

public:

  TypesTable();

  bool contains(string type);

  void insert(string type);

};

#endif // TYPES_TABLE_HPP
