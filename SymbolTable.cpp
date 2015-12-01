#include "SymbolTable.hpp"

template <class Type>
SymbolTable<Type>::SymbolTable(SymbolTable *p) {
  prev = p;
}

template <class Type>
void SymbolTable<Type>::put(std::string lexeme, Type entry) {
  table.insert(std::pair<std::string, Type>(lexeme, entry));
}

template <class Type>
Type* SymbolTable<Type>::get(std::string lexeme) {
  for(SymbolTable<Type> *e = this; e != NULL; e = e->prev) {
    typename std::map<std::string, Type>::iterator it = e->table.find(lexeme);
    if(it != table.end()) {
      return &(it->second);
    }
  }
  return NULL;
}
