#include <iostream>
using namespace std;

int countPairs(string s){
	if (s.length() <3)
		return 0;

	if (s[0] == s[2])
		return 1 + countPairs(s.substr(1));
	return countPairs(s.substr(1));


}
int main(){
	cout<<"countPairs(A) = "<<countPairs("A")<<endl; // 0
	cout<<"countPairs(AX) = "<<countPairs("AX")<<endl; //0
	cout<<"countPairs(AXA) = "<<countPairs("AXA")<<endl; //1
	cout<<"countPairs(AAA) = "<<countPairs("AAA")<<endl; // 1
	cout<<"countPairs(AXAX) = "<<countPairs("AXAX")<<endl;// 2
	cout<<"countPairs(AAXA) = "<<countPairs("AAXA")<<endl;// 1
	cout<<"countPairs(AAXAXA) = "<<countPairs("AAXAXA")<<endl; // 3
	cout<<"countPairs(XAXAXA) = "<<countPairs("XAXAXA")<<endl; //4
	

	
}