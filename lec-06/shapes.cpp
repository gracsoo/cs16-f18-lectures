//shapes.cpp

#include <iostream>
#include <cstdlib>
#include "shapes.h"
using namespace std;
void drawTriangle(int width){//Definition
    //Code to draw a right triangle
    for(int j=0; j<width;j++){
        for(int i=0; i<=j;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}
string drawTriangleR(int width){//Definition
    //Code to draw a right triangle
    string res = "";
    for(int j=0; j<width;j++){
        for(int i=0; i<=j;i++){
            res+="*";
        }
		for(int i =0; i< (width-j-1);i++)
			res+="_";
        res+="\n";
    }
    return res;

}

string drawSquare(int width){

	string result="";

	for(int i =0; i<width;i++){
		for(int j =0; j<width;j++){
			result+="*";
		}
		result+="\n";
	}

	return result;
}
