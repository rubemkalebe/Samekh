#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include <iostream>
#include <map>
#include "Entry.hpp"

class Environment {

private:

  std::map<std::string, Entry> table;
  Environment *prev;

public:

  Environment(Environment *p);

  void put(std::string lexeme, Entry entry);

  Entry* get(std::string lexeme);

};

#endif // ENVIRONMENT_HPP
