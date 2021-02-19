#include <stdio.h>
#include "shape.h"

int main(void)
{
    point_t p0;
    point_t p1;
    line_t line0;
    line_t line1;
    rectangle_t rect0, rect1;

    p0.x = 5;
    p0.y = 1;

    p1.x = -3;
    p1.y = 5;

    line0.start = p0;
    line0.end = p1;

    line1.start = p1;
    line1.end = p0;

    printf("line0 length^2: %d\n", get_line_length_sq(line0));
    printf("line1 length^2: %d\n", get_line_length_sq(line1));

    rect0 = build_rectangle(p0, p1);
    printf("rect0: (%d, %d) (%d, %d)\n", rect0.top_left.x, rect0.top_left.y,
                                        rect0.bottom_right.x, rect0.bottom_right.y);
    printf("rect0 area: %d\n", get_rectangle_area(rect0));

    rect1 = build_rectangle(p1, p0);
    printf("rect1: (%d, %d) (%d, %d)\n", rect1.top_left.x, rect1.top_left.y,
                                        rect1.bottom_right.x, rect1.bottom_right.y);
    printf("rect1 area: %d\n", get_rectangle_area(rect1));

    /* improper rect build */
    rect0.top_left = p0;
    rect0.bottom_right = p1;
    printf("rect0 area: %d\n", get_rectangle_area(rect0));

    return 0;
}



