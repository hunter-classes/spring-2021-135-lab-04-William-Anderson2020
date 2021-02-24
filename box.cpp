#include <iostream>
using namespace std;

string draw_box(int h, int w){
    string shape = "";
    for (int i = 0; i < h; i++){
        string line = "";
        for (int j = 0; i < j; i++){
            line = line + "*";
        };
        shape = shape + line + "\n";
    };
    return shape;
};