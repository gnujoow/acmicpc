#include <stdio.h>
 
int main()
{
    int num[3];
    char str[4];
 
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    scanf("%s", str);
     
    int temp = 0;
    //bubble sort
    for(int i =0 ; i<3; i++){
        for (int j=0; j <3 ; j++){
            if(num[i] < num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
 
    
    printf("%d %d %d",
           num[str[0]-'A']
          ,num[str[1]-'A']
          ,num[str[2]-'A']);
     
    return 0;
}
