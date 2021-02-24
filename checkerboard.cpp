#include <iostream>
#include <string>
using namespace std;

string draw_checkerboard(int width, int height){
    string shape;
    string fill_char = "*";
    for (int i = 0; i < height; i++){
        string line = "";
        if (i % 2 == 0){
                line += "*";
            }else{
                line += " ";
            };
        for (int j = 0; j < width; j++){
            if (line.substr(line.length() - 1) == "*"){
                line += " ";
            }else{
               line += "*"; 
            };
        };
        line += "\n";
        shape += line;
    };
    return shape;
};