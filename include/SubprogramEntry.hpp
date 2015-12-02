#ifndef SUBPROGRAM_ENTRY_HPP
#define SUBPROGRAM_ENTRY_HPP

#include <iostream>
#include <list>

using std::string;
using std::list;

class SubprogramEntry {

  string returnType;

  list<string> parametersType;

public:

  SubprogramEntry();

  SubprogramEntry(string returnType);

  void addParameterType(string type);

  void setReturnType(const string &type);

  string getReturnType();

  const list<string>& getParametersType();

  void setParametersType(list<string> l);
};

#endif // SUBPROGRAM_ENTRY_HPP
