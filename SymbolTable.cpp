#include "SymbolTable.hpp"

SymbolTable::SymbolTable(SymbolTable *p) {
  prev = p;
}

void SymbolTable::put(std::string lexeme, Entry entry) {
  table.insert(std::pair<std::string, Entry>(lexeme, entry));
}

Entry* SymbolTable::get(std::string lexeme) {
  for(SymbolTable *e = this; e != NULL; e = e->prev) {
    std::map<std::string, Entry>::iterator it = e->table.find(lexeme);
    if(it != table.end()) {
      return &(it->second);
    }
  }
  return NULL;
}

void SymbolTable::print() {
  std::cout << "Tabela\n";
  for(std::map<std::string, Entry>::iterator it = table.begin(); it != table.end(); it++) {
    std::cout << it->first << " => " << it->second.getType() << std::endl;
  }
}
