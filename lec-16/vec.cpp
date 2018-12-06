#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
/*
* Generating random numbers
* C++ Standard Template Library
* Searching: Binary search - recursion
*/
//Generic function: it works for arrays, vectors
//template <class T>
void printList(vector<int>& a){
		// Print all the elements
	for(auto item : a){
		cout<<item<<endl;
	}

}

int main(){
	srand(time(NULL));

	array<int, 10> arr1; //static fixed size array
	vector<int> v1;

	//Using the range based forloop
	//Initialize the raw array with random numbers
	for(int i =0; i< 10; i++){
		v1.push_back(rand()%100 +1);
		arr1[i] = rand()%100 +1;
	}
	cout <<"Vector before sorting"<<endl;
	printList(v1);
	cout <<"Vector after sorting"<<endl;
	sort(v1.begin(), v1.end());
	printList(v1);

	cout <<"Array before sorting"<<endl;
	printList(arr1);
	cout <<"Array after sorting"<<endl;
	sort(arr1.begin(), arr1.end());
	printList(arr1);




	
	return 0;
}