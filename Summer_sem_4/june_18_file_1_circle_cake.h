#ifndef JUNE_18_FILE_1_CIRCLE_CAKE_H
#define JUNE_18_FILE_1_CIRCLE_CAKE_H

#include "june_18_file_1_constants.h"
#include <cmath>

class Circle_Cake
{
    private:
        double radius {sqrt(PI)};
        double height {6.0};
    
    public:
        double base_area ()
        {
            return PI * radius * radius;
        }

        double cream_qty ()
        {
            return base_area() + (2 * PI * radius * height);
        }

        double cake_vol ()
        {
            return base_area() * height;
        }

        double get_radius ()
        {
            return radius;
        }

        void set_radius (double new_radius)
        {   
            radius = new_radius;
        }
};

#endif