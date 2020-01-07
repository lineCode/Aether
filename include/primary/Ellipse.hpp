#ifndef AETHER_ELLIPSE_HPP
#define AETHER_ELLIPSE_HPP

#include "base/Texture.hpp"

namespace Aether {
    // An ellipse is a texture containing an ellipse. It can be used as
    // both a circle and ellipse/oval.
    class Ellipse : public Texture {
        private:
            // Horizontal diameter
            unsigned int xDiameter_;
            // Vetical diameter
            unsigned int yDiameter_;

            void redrawTexture();

        public:
            // Constructor takes dimensions
            // If only one is provided, a circle is created
            Ellipse(unsigned int, unsigned int = 0);

            // Getters + setters for diameters
            unsigned int xDiameter();
            void setXDiameter(unsigned int);
            unsigned int yDiameter();
            void setYDiameter(unsigned int);
    };
};

#endif