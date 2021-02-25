#include <iostream>
#include <string>
using namespace std;

#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower_triangle.h"
#include "upper_triangle.h"
#include "trapezoid.h"

string break_line(){
    return "\n--------------------\n\n";
}

int main(){
    cout << draw_box(4,4);
    cout << break_line();
    cout << draw_checkerboard(11,6);
    cout << break_line();
    cout << draw_cross(8);
    cout << break_line();
    cout << draw_cross(7);
    cout << break_line();
    cout << draw_cross(1);
    cout << break_line();
    cout << draw_lower_triangle(6);
    cout << break_line();
    cout << draw_lower_triangle(1);
    cout << break_line();
    cout << draw_lower_triangle(10);
    cout << break_line();
    cout << draw_upper_triangle(6);
    cout << break_line();
    cout << draw_upper_triangle(1);
    cout << break_line();
    cout << draw_upper_triangle(10);
    cout << break_line();
    cout << draw_trapezoid(12,6);
    cout << break_line();
    cout << draw_trapezoid(5,3);
    cout << break_line();
    cout << draw_trapezoid(12,7);
    return 0;
}