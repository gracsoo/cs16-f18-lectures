#include <iostream>
// This is  version 2
// include a library for input output
using namespace std;
//allows referring to specific modules in the standard namespace

int foobar(){
    return 5;
}
int main(){
    int x; //Declare the variable x
    x = 3; //Initialize x

    int y =10;
    int z;

    string name;
    name = "Diba";

    //Execution always starts with main()
    cout<<"Hello CS16! "<<name<<endl;
    foobar();
    return 0;
}
