#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string arr[1000];

int main(){
	string str;
	cin >> str;

	for(int i = 0 ; i < str.length() ; i++)
		arr[i] = str.substr(i, str.length() - i);

	sort(arr,arr + str.length());
	for(int i = 0 ; i <  str.length() ; i++)
		cout<<arr[i]<<'\n';

	return 0;
}