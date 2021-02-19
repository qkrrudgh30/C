#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "shape.h"

rectangle_t build_rectangle(point_t p0, point_t p1)
{
    rectangle_t rect;

    if (p0.x < p1.x) {
        rect.top_left.x = p0.x;
        rect.bottom_right.x = p1.x;
    } else {
        rect.top_left.x = p1.x;
        rect.bottom_right.x = p0.x;
    }

    if (p0.y < p1.y) {
        rect.top_left.y = p1.y;
        rect.bottom_right.y = p0.y;
    } else {
        rect.top_left.y = p0.y;
        rect.bottom_right.y = p1.y;
    }

    return rect;
}

int get_line_length_sq(line_t line)
{
    int x_diff;
    int y_diff;
    
    x_diff = line.end.x - line.start.x;
    y_diff = line.end.y - line.start.y;

    return x_diff*x_diff + y_diff*y_diff;
}

int get_rectangle_area(rectangle_t rect)
{
    int width = abs(rect.bottom_right.x - rect.top_left.x);
    int height = abs(rect.top_left.y - rect.bottom_right.y);

    return width * height;
}




