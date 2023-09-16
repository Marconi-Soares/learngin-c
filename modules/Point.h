#ifndef POINT_H
#define POINT_H
typedef struct 
{
        double x, y;
} Point;

Point Point_value(double x, double y);

void Point_print(Point *self);

#endif
