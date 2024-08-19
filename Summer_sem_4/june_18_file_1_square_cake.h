#ifndef JUNE_18_FILE_1_SQUARE_CAKE_H
#define JUNE_18_FILE_1_SQUARE_CAKE_H

#include "june_18_file_1_constants.h"
#include <cmath>

class Square_Cake
{
    private:
        double side {PI};
        double height {6.0};
    
    public:
        double base_area ()
        {
            return side * side;
        }

        double cream_qty ()
        {
            return base_area() + (4 * height * side);
        }

        double cake_vol ()
        {
            return base_area() * height;
        }

        double get_side ()
        {   
            return side;
        }

        void set_side (double new_side)
        {   
            side = new_side;
        }
};

#endif