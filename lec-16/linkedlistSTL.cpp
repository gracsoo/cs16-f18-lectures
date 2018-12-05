#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
#include <algorithm>
using namespace std;
/*
* Generating random numbers
* C++ Standard Template Library
* Searching: Binary search - recursion
*/
//Generic function: it works for arrays, vectors
template <class T>
void printList(T& a){
		// Print all the elements
	for(auto item : a){
		cout<<item<<endl;
	}

}

int main(){
	srand(time(NULL));

	list<int> ll;

	//Using the range based forloop
	//Initialize the raw array with random numbers
	for(int i =0; i< 10; i++){
		ll.push_back(rand()%100 +1);
	}
	cout <<"List before sorting"<<endl;
	printList(ll);
	cout <<"List after sorting"<<endl;
	// Cannot use sort(v1.begin(), v1.end()); 
	// because linked list does not support random access
	ll.sort();
	printList(ll);

	
	return 0;
}