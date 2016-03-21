#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    string str[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    short sh_m, sh_d;
    short shrg_mnth[]={ 31,28,31,30,
                        31,30,31,31,
                        30,31,30,31 };
    cin >> sh_m >> sh_d;
    if( sh_m!=1 ) 
        for( int i=0; i<sh_m-1; ++i ) 
            sh_d+=shrg_mnth[i];


    cout << str[sh_d%7] << endl;
    return 0;
}
