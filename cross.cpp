#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string draw_cross(int size){
    string shape;
    for (int i = 0; i <= size; i++){
        string line = "";
        int counter;
        int line_num = i;
        bool odd_size = size%2 != 0;
        if (i > round(size/2)){
            line_num = size - i;
        };
        if (line_num != size / 2 || odd_size){
            counter = 0;
            while(counter < line_num){
                line += " ";
                counter++;
            };
            line += "*";
            counter = 0;
            while(counter < size - 2*(line_num+1)){
                line += " ";
                counter++;
            };
            if(!(odd_size && line_num == size/2)){
                line += "*";    
            };
            counter = 0;
            while(counter < line_num){
                line += " ";
                counter++;
            };
            line += "\n";
            shape += line;
            if(odd_size && i == size - (size/2 + 1)){
                i++;
            };
        };
    };
    return shape;
};