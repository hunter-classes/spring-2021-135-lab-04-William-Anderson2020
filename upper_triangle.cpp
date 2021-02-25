#include <iostream>
#include <string>
using namespace std;

string draw_upper_triangle(int size){
    string shape;
    for(int i = 0; i < size; i++){
        string line;
        for(int j = 0; j < i; j++){
            line += " ";
        };
        for(int j = i; j < size; j++){
            line += "*";
        };
        line += "\n";
        shape = shape+ line;
    };
    return shape;
};