#include <string>

#ifndef ITEM_H
#define ITEM_H

namespace current 
{
    class Item
    {
        protected:
            std::string name;
            std::string description;
        public:
            std::string name();
            std::string description();
            Item(std::string name, std::string description);

    };    
}

#endif
