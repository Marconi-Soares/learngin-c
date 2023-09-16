#include <stdio.h>

#include "Point.h"


Point Point_value(double x, double y)
{
        Point p = { x, y };
        return p;
}

void Point_print(Point *self)
{
        printf("(%.2f %.2f)\n", self->x , self->y);
}
