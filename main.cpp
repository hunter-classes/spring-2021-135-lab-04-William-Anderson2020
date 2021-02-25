#include <iostream>
#include <string>
using namespace std;

#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower_triangle.h"
#include "upper_triangle.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

string break_line(){
    return "\n--------------------\n\n";
}

int main(){
    cout << "Testing Task A: box.cpp: \n\n";
    cout << "Square\n";
    cout << draw_box(4,4);
    cout << break_line();
    cout << "Width > height\n";
    cout << draw_box(12,6);
    cout << break_line();
    cout << "Width < height\n";
    cout << draw_box(6,12);
    cout << break_line();
    cout << "Testing Task B: checkerboard.cpp: \n\n";
    cout << "Square\n";
    cout << draw_checkerboard(8,8);
    cout << break_line();
    cout << "Width > height\n";
    cout << draw_checkerboard(11,6);
    cout << break_line();
    cout << "Width < height\n";
    cout << draw_checkerboard(8,16);
    cout << break_line();
    cout << "Testing Task C: cross.cpp: \n\n";
    cout << "Even length\n";
    cout << draw_cross(8);
    cout << break_line();
    cout << "Odd length\n";
    cout << draw_cross(7);
    cout << break_line();
    cout << "Length of 1\n";
    cout << draw_cross(1);
    cout << break_line();
    cout << "Testing Task D: lower_triangle.cpp: \n\n";
    cout << "Even length\n";
    cout << draw_lower_triangle(6);
    cout << break_line();
    cout << "Odd length\n";
    cout << draw_lower_triangle(13);
    cout << break_line();
    cout << "Length of 1\n";
    cout << draw_lower_triangle(1);
    cout << break_line();
    cout << "Testing Task E: upper_triangle.cpp: \n\n";
    cout << "Even length\n";
    cout << draw_upper_triangle(6);
    cout << break_line();
    cout << "Odd length\n";
    cout << draw_upper_triangle(7);
    cout << break_line();
    cout << "Length of 1\n";
    cout << draw_upper_triangle(1);
    cout << break_line();
    cout << "Testing Task F: trapezoid.cpp: \n\n";
    cout << "Trapezoid\n";
    cout << draw_trapezoid(12,6);
    cout << break_line();
    cout << "Triangle\n";
    cout << draw_trapezoid(5,3);
    cout << break_line();
    cout << "Testing Task G: checkerboard3x3.cpp: \n\n";
    cout << "Even split\n";
    cout << draw_checkerboard3x3(15,15);
    cout << break_line();
    cout << "Odd split\n";
    cout << draw_checkerboard3x3(12,16);
    cout << break_line();
    cout << "End of tests\n";
    return 0;
}