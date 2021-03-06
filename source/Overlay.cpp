#include "Aether/Overlay.hpp"

// Background colour
#define BG_COLOUR Colour{0, 0, 0, 150}

namespace Aether {
    Overlay::Overlay() : Screen() {
        this->close_ = false;
    }

    void Overlay::close() {
        this->close_ = true;
    }

    void Overlay::reuse() {
        this->close_ = false;
    }

    bool Overlay::shouldClose() {
        return this->close_;
    }

    void Overlay::render() {
        // Draw background
        SDLHelper::drawFilledRect(BG_COLOUR, this->x(), this->y(), this->w(), this->h());

        // Draw elements
        Screen::render();
    }
};