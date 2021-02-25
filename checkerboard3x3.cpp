#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string draw_checkerboard3x3(int width, int height){
    string shape;
    string height_first_char = "*";
    for(int i = 0; i < height; i++){
        if(i % 3 == 0 && i != 0){
            if(height_first_char == "*"){
                height_first_char = " ";
            }else{
                height_first_char = "*";
            };
        };
        string line;
        string width_char = height_first_char;
        for(int j = 0; j < width; j++){
            if(j % 3 == 0 && j != 0){
                if(width_char == "*"){
                    width_char = " ";
                }else{
                    width_char = "*";
                };
            };
            line += width_char;
        };
        line += "\n";
        shape += line;
    };
    return shape;
};