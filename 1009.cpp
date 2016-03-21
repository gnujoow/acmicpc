#include <stdio.h>

int main()
{
    int a,b,n,temp;
   	scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d", &a, &b);
        temp = a;
        while(--b)
        {
            a=temp*a%10;
        }
        if (a == 0)
        {
            printf("10\n");
            continue;
        }
        printf("%d\n", a);
    }
    
	return 0;    
}
