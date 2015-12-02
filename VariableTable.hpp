#ifndef VARIABLE_TABLE_HPP
#define VARIABLE_TABLE_HPP

#include <iostream>
#include <map>

#include "VariableEntry.hpp"

class VariableTable {

private:

  std::map<std::string, VariableEntry> table;
  VariableTable* prev;

public:

  VariableTable(VariableTable *p);

  void put(std::string lexeme, VariableEntry entry);

  VariableEntry* get(std::string lexeme);

  void setTable(std::map<std::string, VariableEntry> newTable);

  void print();

};

#endif // VARIABLE_TABLE_HPP
