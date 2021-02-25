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
        bool mid_line_marker = false;
        if (i > round(size/2)){
            line_num = size - i;
        };
        if (line_num != size / 2 || (size%2 != 0 && (line_num == size/2 && mid_line_marker == false))){
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
            if(!(size%2 != 0 && line_num == size/2)){
                line += "*";    
            }else{
                mid_line_marker = true;
            };
            counter = 0;
            while(counter < line_num){
                line += " ";
                counter++;
            };
            cout << line << " " << line_num << endl;
            line += "\n";
            shape += line;    
        };
    };
    return shape;
};