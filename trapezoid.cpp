#include <iostream>
#include <string>
using namespace std;

string draw_trapezoid(int width, int height){
    if(height * 2 > width+1){
        return "Impossible shape!\n";
    };
    string shape;
    for(int i = 0; i < height; i++){
        string line;
        for(int j = 0; j<i; j++){
            line += " ";
        };
        for(int j = 0; j < width - (2*i+1); j++){
            line += "*";
        };
        line += "\n";
        shape += line;
    };
    return shape;
};