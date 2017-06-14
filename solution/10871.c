#include <stdio.h>
#include <stdlib.h>
 
int main(){
    int a,b,i;
    int *arr;
  
    scanf("%d %d",&a,&b);
 
    arr = (int*) malloc(sizeof(int)*a);
  
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<b)
            printf("%d ",arr[i]);
    }
    return 0;
}
