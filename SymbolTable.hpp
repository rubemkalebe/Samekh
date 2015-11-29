#ifndef SYMBOL_TABLE_HPP
#define SYMBOL_TABLE_HPP

#include <iostream>
#include <map>
#include "Entry.hpp"

class SymbolTable {

private:

  std::map<std::string, Entry> table;
  SymbolTable *prev;

public:

  SymbolTable(SymbolTable *p);

  void put(std::string lexeme, Entry entry);

  Entry* get(std::string lexeme);

  void print();

};

#endif // SYMBOL_TABLE_HPP
