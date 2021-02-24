#include <iostream>
#include <string>
using namespace std;

string draw_box(int width, int height){
    string shape;
    for (int i = 0; i < height; i++){
        string line = "";
        for (int j = 0; i < width; i++){
            line += "*";
        };
        line += "\n";
        shape += line;
    };
    cout << shape;
    return shape;
};