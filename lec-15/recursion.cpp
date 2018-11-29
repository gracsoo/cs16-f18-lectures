#include <iostream>
using namespace std;

int factorial(int N){
	cout<<"Fact of "<< N <<" is :"<<endl;
	int result = factorial(N-1)*N;
	cout<<result<<endl;
	return result;
}



int main(){

	cout<<"Factorial of 0 is: "<<factorial(0)<<endl;
	cout<<"Factorial of 1 is: "<<factorial(1)<<endl;
	cout<<"Factorial of 3 is: "<<factorial(3)<<endl;
	cout<<"Factorial of 5 is: "<<factorial(5)<<endl;



	return 0;

}
