#include <iostream>
#include <cctype>
using namespace std;

int lower, upper, digit, space;

void check(string s){
	for(int i = 0  ;  i < s.length() ; i++){
		if (islower(s[i])) lower++;
        else if (isupper(s[i])) upper++;
        else if (isdigit(s[i])) digit++;
        else if (isspace(s[i])) space++;
	}
}

int main(){
	string in;
	while(getline(cin, in)){
		lower=0;upper=0;digit=0;space=0;
		check(in);
		cout << lower << " " << upper << " " << digit << " " << space << '\n';
	}
	return 0;
}

