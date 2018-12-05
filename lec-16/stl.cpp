#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;
/*
* Generating random numbers
* C++ Standard Template Library
* Searching: Binary search - recursion
*/
struct Undergrad{
	string name;
	double gpa;
};

void printList(array<int>& a){
		// Print all the elements
	for(auto item : a){
		cout<<item<<endl;
	}

}

int main(){
	srand(time(NULL));
	int arr[10]; // Raw array
	array<int, 10> arr1;
	array<double, 10> arr2;
	array<Undergrad, 10> arr3;
	//Using the range based forloop
	//Initialize the raw array with random numbers
	for(auto& item : arr1){
		item = rand()%100 +1;
	}

	printList(arr1);
	
	return 0;
}