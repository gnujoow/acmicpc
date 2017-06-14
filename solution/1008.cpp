#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;

    cout<<fixed;         //소수점 고정
    cout.precision(9);

    cout << a/b ;
    
    return 0;
}
