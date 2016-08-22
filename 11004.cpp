//다시풀어볼것
#include <cstdio>
#include <algorithm>
using namespace std;

int a[5000000];
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
 
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);

    nth_element(a,a+k-1,a+n);
    printf("%d\n",a[k-1]);
    return 0;
}