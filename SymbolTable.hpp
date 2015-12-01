#ifndef SYMBOL_TABLE_HPP
#define SYMBOL_TABLE_HPP

#include <iostream>
#include <map>

#include "VariableEntry.hpp"

template <class Type>
class SymbolTable {

private:

  std::map<std::string, Type> table;
  SymbolTable *prev;

public:

  SymbolTable(SymbolTable *p);

  void put(std::string lexeme, Type entry);

  Type* get(std::string lexeme);

};

#include "VariableEntry.cpp"
#endif // SYMBOL_TABLE_HPP
