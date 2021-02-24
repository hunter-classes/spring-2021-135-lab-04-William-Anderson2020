#include <iostream>
#include <string>
using namespace std;

#include "box.h"
#include "checkerboard.h"

int main(){
    cout << draw_box(4,4);
    cout << draw_checkerboard(11,6);
    return 0;
}