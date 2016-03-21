#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    //첫째 줄에 (A+B)%C, 둘째 줄에 (A%C + B%C)%C, 셋째 줄에 (A×B)%C, 넷째 줄에 (A%C × B%C)%C를 출력한다.
    cout << (a+b)%c <<endl
        << (a%c + b%c)%c <<endl
        << (a*b)%c<<endl
        <<(a%c * b%c)%c<<endl;



    return 0;
}
