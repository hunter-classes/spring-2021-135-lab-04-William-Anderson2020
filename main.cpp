#include <iostream>
#include <string>
using namespace std;

#include "box.h"
#include "checkerboard.h"
#include "cross.h"

string break_line(){
    return "\n--------------------\n";
}

int main(){
    cout << draw_box(4,4);
    cout << break_line();
    cout << draw_checkerboard(11,6);
    cout << break_line();
    cout << draw_cross(8);
    return 0;
}