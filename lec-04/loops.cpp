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
    double sum = 0;
    for(int i = 1; i <= num; i++){
        sum += 1.0/i;
    }
    cout<<"our sum:"<<sum<<endl;
    
    return 0;
}
