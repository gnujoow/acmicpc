//https://www.acmicpc.net/problem/2902
#include <stdio.h>
#include <string.h>
int main(){
    char a[100] = {0,};
    int n;

    scanf("%s", a);
    n=strlen(a);
    
    for(int i=0; i<n; i++){
        if (a[i] > 64 && a[i] < 94)
        {
        	printf("%c",a[i]);
        }
    }
    return 0;
}