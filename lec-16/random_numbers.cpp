#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
* Generating random numbers
* C++ Standard Template Library
* Searching: Binary search - recursion
*/

int main(){
	cout <<"Time: "<<time(NULL)<<endl;
	srand(time(NULL));
	for(int i =0; i< 10; i++)
		cout<<rand()%100<<endl;
	return 0;
}