#include <iostream>
#include <string>
using namespace std;

string draw_cross(int size){
    string shape;
    for (int i = 0; i < size; i++){
        string line = "";
        int counter;
        int line_num = i;
        if (i > size/2){
            line_num = size - i;
        };
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
        line += "*";
        counter = 0;
        while(counter < line_num){
            line += " ";
            counter++;
        };
        cout << line << " " << line_num << endl;
        line += "\n";
        shape += line;
    };
    return shape;
};