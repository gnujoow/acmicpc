#include <cstdio>
int num[1001];
int memo[1001];
int main() {
    int n;
    scanf("%d",&n);

    for (int i=0; i<n; i++)
        scanf("%d",&num[i]);
    
    for (int i=n-1; i>=0; i--) {
        memo[i] = 1;
        for (int j=i+1; j<=n; j++) {
            if (num[i] > num[j] && memo[j] + 1 > memo[i]) {
                memo[i] = memo[j]+1;
            }
        }
    }

    int ret = 0;
    for (int i=0; i< n; i++) {
        if (ret < memo[i]) {
            ret = memo[i];
        }
    }
    printf("%d\n",ret);
    return 0;
}