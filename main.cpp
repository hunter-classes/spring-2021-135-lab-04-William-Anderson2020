#include <iostream>
#include <string>
using namespace std;

#include "box.h"
#include "checkerboard.h"

int main(){
    cout << draw_box(4,4);
    cout << draw_checkerboard(7,7);
    return 0;
}