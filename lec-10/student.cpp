#include <iostream>
using namespace std;

struct Student{
   string name;
   int perm;
   string major;
   double gpa[4];
  
};
void printStudent(const Student& s){
}

}
int main(){
  Student s1 = {"Harry Potter", 1234, "CS", {3.9, 4, 4, 4}};
  printStudent(s1);

  return 0; 
}
