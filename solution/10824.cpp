#include <iostream>
#include <string>
using namespace std;

int main(){
	string A, B, C, D;
	cin>>A>>B>>C>>D;
	cout<<stoi(A+B)+stoi(C+D)<<endl;
	return 0;
}