//shapes.cpp
//Demo the use of functions
#include <iostream>
#include <cstdlib>

using namespace std;


void drawTriangle(int width); //Declaration
string drawTriangleR(int width);
string drawSquare(int width);

//allows referring to specific modules in the standard namespace
int main(int argc, char* argv[]){
    //cout<<"Number of arguments to the program: "<< argc<<endl;    
    if(argc != 2){
        cerr<<"Usage :"<<argv[0]<<" number"<<endl;
        exit(1);
    }
    int num = atoi(argv[1]);
    string result;
    //drawTriangle(num);// Function call
    result = drawTriangleR(num);// Function call
    cout<<result;

    return 0;
}

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
