#include <iostream>
using namespace std;

int factorial(int N){
	if(N<=1)
		return 1;
	return factorial(N-1)* N;
}

void printReverse2(int arr[],int num){
	cout<<arr[num-1]<<endl;
	if(num==1){
		return;
	}
	printReverse2(arr,num-1);
}


void printReverse3(int arr[],int len){
	
	if(len==0){ //Base case
		return;
	}

	printReverse3(arr+1,len-1); //print the rest of the array in reverse order
	// print the current element
	cout<<arr[0]<<endl;

}

void printReverse(int arr[], int len){
int i = len-1;
if(i == 0){
	cout<<arr[i]<<endl;
}else{
	cout<<arr[i]<<endl;
	printReverse(arr,len-1);

}

}


int main(){

	cout<<"Factorial of 0 is: "<<factorial(0)<<endl;
	cout<<"Factorial of 1 is: "<<factorial(1)<<endl;
	cout<<"Factorial of 3 is: "<<factorial(3)<<endl;
	cout<<"Factorial of 5 is: "<<factorial(5)<<endl;

	int arr[]={10,20,30,40,50};
	printReverse3(arr, 5);

	return 0;

}
