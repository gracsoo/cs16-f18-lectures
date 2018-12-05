#include <iostream>
#include <cstdlib>
#include <ctime>
#include <list>
#include <vector>
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

int binarySearch(vector<int>&v, int value, int lo, int hi){
	if(hi<lo)
		return -1;
	int mid = (lo+hi)/2;
	if(v[mid]==value)
		return mid; //Base case
	if(v[mid]<value)
		return binarySearch(v, value, mid+1, hi);
	else
		return binarySearch(v, value, lo, mid-1);


}


int main(){
	srand(time(NULL));
	vector<int> v;
	
	

	//Using the range based forloop
	//Initialize the vector
	for(int i =0; i< 10; i++){
		v.push_back(rand()%100 +1);
	}
	v.push_back(55);
	cout <<"Vector before sorting"<<endl;
	printList(v);
	cout <<"Vector after sorting"<<endl;
	// Cannot use sort(v1.begin(), v1.end()); 
	// because linked list does not support random access
	sort(v.begin(), v.end());
	printList(v);
	//Vector is sorted, search usingh binary search
	cout<<"Index of element 55 is "<<binarySearch(v, 55, 0, v.size()-1)<<endl;
	cout<<"Index of element 10000 is "<<binarySearch(v, 10000, 0, v.size()-1)<<endl;
	
	return 0;
}