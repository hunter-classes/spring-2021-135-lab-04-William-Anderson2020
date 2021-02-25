#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string draw_checkerboard3x3(int width, int height){
    string shape;
    string height_first_char = "*";
    for(int i = 0; i < width; i++){
        if((i+1)%3 == 0){
            cout << "FLIP HEIGHT";
            if(height_first_char == "*"){
                height_first_char = " ";
            }else{
                height_first_char = "*";
            };
        };
        string line;
        line += height_first_char;
        string width_char = height_first_char;
        for(int j = 0; j < width; j++){
            if((j+1)%3 == 0){
                cout << "FLIP WIDTH";
                if(width_char == "*"){
                    width_char = " ";
                }else{
                    width_char = "*";
                };
                line += width_char;
            };
        };
        line += "\n";
        shape += line;
    };
    return shape;
};