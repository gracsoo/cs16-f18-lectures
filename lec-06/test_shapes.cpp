
//Demo the use of functions
#include <iostream>
#include <cstdlib>
#include "shapes.h"
using namespace std;

void assertEqual(string actual, string expected, string message="");

void assertEqual(string actual, string expected, string message){
	if(actual==expected){
		cout<<"PASSED: "<<message<<endl;
	}else{
		cout<<"FAILED: "<<message<<endl<<"Expected:"<<"[\n"
		<<expected<<"\n]"<<"Actual: "<<"[\n"<<actual<<"\n]"<<endl;
		
	}
}

void test_drawTriangleR(){

string exp1=
"*_\n"
"**\n";

assertEqual(drawTriangleR(2), exp1, "Width: 2");
string exp2=
"*__\n"
"**_\n"
"***\n";

assertEqual(drawTriangleR(3), exp2, "Width: 3");


}


//allows referring to specific modules in the standard namespace
int main(int argc, char* argv[]){
    //cout<<"Number of arguments to the program: "<< argc<<endl;    
    if(argc != 2){
        cerr<<"Usage :"<<argv[0]<<" number"<<endl;
        exit(1);
    }
    test_drawTriangleR();


    /*
    int num = atoi(argv[1]);
	
    string result;
    result = drawTriangleR(num);// Function call
    cout<<result;
	*/

    return 0;
}

