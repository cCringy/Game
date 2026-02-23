#include <string>

#ifndef GAME_GAMECODE_ITEM_H_
#define GAME_GAMECODE_ITEM_H_

namespace current 
{
  class Item
  {
    protected:
      std::string name_;
      std::string description_;
    public:
      Item(std::string name, std::string description);
      std::string name() { return name_; };
      std::string description() { return description_; };
    };    
}

#endif
