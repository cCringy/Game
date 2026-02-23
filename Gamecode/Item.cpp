#include "item.h"

#include <string>
#include <iostream>

namespace current {
  class Item {
    protected:
      std::string name_;
      std::string description_;
    public:
      Item(std::string name, std::string description) {
        if (name == "" || description == "") {
          std::cout << "Empty Input";
          return;
        }
        else {
          this->name_ = name;
          this->description_ = description;
        }
      };
      
      std::string name() { return name_; };
      std::string description() { return description_; };
    };    
}