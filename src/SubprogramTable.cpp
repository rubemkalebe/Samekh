#include "SubprogramTable.hpp"

SubprogramTable::SubprogramTable() {

}

void SubprogramTable::put(std::string id, SubprogramEntry entry) {
  table.insert(std::pair<std::string, SubprogramEntry>(id, entry));
}

SubprogramEntry* SubprogramTable::get(std::string id) {
  std::map<std::string, SubprogramEntry>::iterator it = table.find(id);
  if(it != table.end()) {
    return &(it->second);
  }
  return NULL;
}
