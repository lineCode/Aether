#ifndef AETHER_MENUOPTION_HPP
#define AETHER_MENUOPTION_HPP

#include "MenuItem.hpp"
#include "primary/Rectangle.hpp"
#include "primary/Text.hpp"

namespace Aether {
    // A MenuOption is a combination of elements which looks like and functions
    // similar to Horizon's. All children are handled internally
    class MenuOption : public MenuItem {
        private:
            // Is this MenuItem the active one?
            bool active;

            // Colours to tint when active or not
            Colour activeColour;
            Colour inactiveColour;

            // Child element pointers (required to update pointers)
            Rectangle * rect;
            Text * text;

        public:
            // Constructor takes string, callback function and active/inactive colours (default to white)
            MenuOption(std::string, std::function<void()>, Colour = {255, 255, 255, 255}, Colour = {255, 255, 255, 255});

            // Setting the width needs to adjust width of text texture
            void setW(int);
            void setWH(int, int);
            void setXYWH(int, int, int, int);

            // Setter for active
            // Changes look of option based on bool
            void setActive(bool);

            // Setter for colours (adjusts children colours)
            void setActiveColour(Colour);
            void setActiveColor(Color);
            void setInactiveColour(Colour);
            void setInactiveColor(Color);
    };
};

#endif