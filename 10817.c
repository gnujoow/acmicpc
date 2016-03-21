#include <stdio.h>

int main(){
    int val[3];
    int top=0;
    scanf("%d %d %d",&val[0],&val[1],&val[2]);
    
    for (int i=0; i<3; i++){
       for (int j=i; j<3; j++){
           if (val[i] > val[j]){
               int temp;
               temp = val[i];
               val[i] = val[j];
               val[j] = temp;
           }
               
       }
    }
    
    printf("%d",val[1]);
    
    return 0;
}
