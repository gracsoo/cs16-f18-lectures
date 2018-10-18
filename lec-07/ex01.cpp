#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream ofs;
	ofs.open("../animals.txt");
	ofs<<"Duck"<<endl<<"Cat"<<endl<<"Cow"<<endl;
	return 0;
}
