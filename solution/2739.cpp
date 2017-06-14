#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    for (int i = 1 ; i < 10; i++)
        cout<< N << " * "<<i<<" = "<<i*N<<'\n';
    
    return 0;
}
