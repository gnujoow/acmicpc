#include <stdio.h>

int main()
{
    int a;
    int temp =0;
    int cycle = 0;
    
    scanf("%d",&a);
    temp = a;
    while(1)
    {
        temp = (temp%10)*10 + (temp%10 + temp/10)%10;
        cycle ++ ;
        
        if(temp == a)
            break;
    }
    
    printf("%d",cycle);
    
    return 0;
}
