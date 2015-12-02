#ifndef SUBPROGRAM_TABLE_HPP
#define SUBPROGRAM_TABLE_HPP

#include <iostream>
#include <map>

#include "SubprogramEntry.hpp"

class SubprogramTable {

private:

  std::map<std::string, SubprogramEntry> table;

public:

  SubprogramTable();

  void put(std::string id, SubprogramEntry entry);

  SubprogramEntry* get(std::string id);

};

#endif // SUBPROGRAM_TABLE_HPP
