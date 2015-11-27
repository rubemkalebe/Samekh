#include "Environment.hpp"

Environment::Environment(Environment *p) {
  prev = p;
}

void Environment::put(std::string lexeme, Entry entry) {
  table.insert(std::pair<std::string, Entry>(lexeme, entry));
}

Entry* Environment::get(std::string lexeme) {
  for(Environment *e = this; e != NULL; e = e->prev) {
    std::map<std::string, Entry>::iterator it = e->table.find(lexeme);
    if(it != table.end()) {
      return &(it->second);
    }
  }
  return NULL;
}