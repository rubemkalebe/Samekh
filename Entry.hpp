#ifndef ENTRY_HPP
#define ENTRY_HPP

#include <iostream>

using std::string;

class Entry {

protected:

  string type;

public:

  Entry(string type);

  string getType();

  void setType(string type);

};

#endif // ENTRY_HPP
