#include <iostream>
using namespace std;
 
int arr[301] = { 0, };
int n;
int D[301][2] = { 0, };
  
  
int main(){
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> arr[i];

    D[1][1] = arr[1];

    for (int i = 2; i <= n; i++){
        D[i][0] = D[i - 1][1] + arr[i];
        D[i][1] = max(D[i - 2][0] + arr[i], D[i - 2][1] + arr[i]);
    }
    
    cout << max(D[n][0], D[n][1]) << endl;
    return 0;
}