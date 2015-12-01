#ifndef VARIABLE_ENTRY_HPP
#define VARIABLE_ENTRY_HPP

#include <iostream>

using std::string;

class VariableEntry {

  string type;

public:

  VariableEntry(string type);

  string getType();

  void setType(string type);
};

#endif // VARIABLE_ENTRY_HPP
