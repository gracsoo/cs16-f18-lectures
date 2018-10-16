#include <iostream>
using namespace std;
   
int b_out;
   
int bar(){     
   b_out = 20;
   int a_in = b_out+5;
   return a_in;
  
 }
int main(){
   int result = bar();
   cout<<result<<endl;
   return 0;
}

