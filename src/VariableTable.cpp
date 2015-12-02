#include "VariableTable.hpp"

VariableTable::VariableTable(VariableTable *p) {
  prev = p;
}

void VariableTable::put(std::string lexeme, VariableEntry entry) {
  table.insert(std::pair<std::string, VariableEntry>(lexeme, entry));
}

VariableEntry* VariableTable::get(std::string lexeme) {
  for(VariableTable *e = this; e != NULL; e = e->prev) {
    std::map<std::string, VariableEntry>::iterator it = e->table.find(lexeme);
    if(it != table.end()) {
      return &(it->second);
    }
  }
  return NULL;
}

bool VariableTable::isValid(std::string lexeme) {
  std::map<std::string, VariableEntry>::iterator it = table.find(lexeme);
  if(it != table.end()) {
    return false;
  } else {
    return true;
  }
}

void VariableTable::setTable(std::map<std::string, VariableEntry> newTable) {
  this->table = newTable;
}

void VariableTable::print() {
  std::cout << "Tabela\n";
  for(std::map<std::string, VariableEntry>::iterator it = table.begin(); it != table.end(); it++) {
    std::cout << it->first << " => " << it->second.getType() << std::endl;
  }
}
