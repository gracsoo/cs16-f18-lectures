#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream ifs("animals.txt");
	//ifs.open("Biganimals.txt");
    
	if(!ifs){
		cerr<<"File does not exist"<<endl;
		return 0;
	}
	string line;  // This string is on the stack
	getline(ifs, line); //reads a line into the variable line
	while(ifs){
	   cout<<line<<endl;
	   getline(ifs, line); //reads a line into the variable line
	}
   

    /* Also correct
	while(1){
	   getline(ifs, line); //reads a line into the variable line
	   if(!ifs)
		   break;
	   cout<<line<<endl;

	}
	*/

	
	/*getline(ifs, line);
	cout<<line<<endl;*/

	ifs.close();
	//Number representation
    int x = 10;
	int y = 0b1010;
	int z = 0xa;

    cout<< x <<" "<< y <<" " << z<<endl;
	return 0;
}
