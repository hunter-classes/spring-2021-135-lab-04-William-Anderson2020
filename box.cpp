#include <iostream>
#include <string>
using namespace std;

string draw_box(int width, int height){
    string shape;
    for (int i = 0; i < height; i++){
        string line = "";
        for (int j = 0; j < width; j++){
            line += "*";
        };
        line += "\n";
        shape += line;
    };
    return shape;
};