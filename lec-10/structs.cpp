#include <iostream>
using namespace std;
struct Point{
   double x;
   double y;
};

struct Box{
   Point ul;
   double width;
   double height;
};

void printPoint(const Point& p){
  cout<<"("<<p.x<<", "<<p.y<<")"<<endl;
}

void setPoint(Point* q, double xx, double yy){
  cout<<"Pass by address"<<endl;
  q->x = xx;
  q->y = yy;
}
int main(){
  Point p1={10, 20}; //Declaration
  printPoint(p1);
  Point* z = &p1;// z points to p1
  setPoint(&p1, 100, 200);
  printPoint(p1);
   
  Box b1;
  Box* z1; // z1 is not pointing to anything
  z1 = &b1; // z1 points to b1

  z1->ul  = p1;
  printPoint(z1->ul);



  return 0; 
}
