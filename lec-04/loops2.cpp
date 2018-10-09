//fizzbuzz.cpp
#include <iostream>
#include <cstdlib>

using namespace std;
//allows referring to specific modules in the standard namespace
int main(int argc, char* argv[]){
    //cout<<"Number of arguments to the program: "<< argc<<endl;    
    if(argc != 2){
        cerr<<"Usage :"<<argv[0]<<" number"<<endl;
        exit(1);
    }

    int num = atoi(argv[1]);
    for(int j=0; j<num;j++){
        for(int i=0; i<=j;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
