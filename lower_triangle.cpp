#include <iostream>
#include <string>
using namespace std;

string draw_lower_triangle(int size){
    string shape;
    for(int i = 0; i < size; i++){
        string line;
        for(int j = 0; j < i+1; j++){
            line += "*";
        };
        line += "\n";
        shape += line;
    };
    return shape;
};