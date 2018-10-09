//fizzbuzz.cpp
#include <iostream>

using namespace std;
//allows referring to specific modules in the standard namespace
int main(){
    int num;
    cout<<"Enter a number: "<<endl;    
    cin>>num;

    if(num%15 == 0){
        cout<<"Fizzbuzz"<<endl;
    }else if(num%3 ==0){
        cout<<"Fizz"<<endl;
    }else if(num%5 ==0){
        cout<<"Buzz"<<endl;
    }else{
        cout<<num<<endl;
    }
    return 0;
}
