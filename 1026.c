#include <stdio.h>
#include <stdlib.h>
    
int up(const void *a,const void *b) // qsort 오름차순으로 하기위함
{
    return (*(int*)a - *(int*)b);
}
    
int down(const void *a,const void *b) // qsort 내림차순으로 하기위함
{
    return (*(int*)b - *(int*)a);
}
    
void match(int b[],int sb[],int cb[],int num)
{
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(cb[j] == 1000000)
            {
                if(sb[i] == b[j])
                {
                    cb[j] = num-1-i;
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }
}
    
int main()
{
    int num,i,j,sum=0;
    int a[201],b[201],sa[201],sb[201],ca[201],cb[201];
    // sa,sb는 각각 a를 오름차순 b를 내림차순으로 정리
    // ca,cb는 각각 a,b행렬의 숫자들의 순서를 넣어놨음
    // 예를 들어 행렬 b가 2 7 8 3 1일 경우
    //           행렬 cb는 1 3 4 2 0 임. ca도 마찬가지임.
        
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<num;i++)
    {
        sa[i] = a[i];
        sb[i] = b[i];
    }
    qsort(sa,num,sizeof(sa[0]),up);
    qsort(sb,num,sizeof(sb[0]),down);
    for(i=0;i<num;i++)
    {
        ca[i] = i;
        cb[i] = 1000000; // 이미 match함수에서 이미 숫자가 들어간 공간은 뛰어넘기 위함
                     // 왜냐하면 행렬이 1 1 1 6 0 일 경우 똑같은 숫자 1이 있어서 숫자가 똑바로 들어가지 않음                
    }
    match(b,sb,cb,num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(ca[i] + cb[j] == num-1) // 이와 같은 방법으로 b행렬에서 제일 큰수와 a행렬에서 제일 작은수를 짝지어서
            {                       // a행렬을 재배열함.
                a[j] = sa[i];
            }
        }
    }
    for(i=0;i<num;i++)
    {
        sum += a[i]*b[i];  // 그 후에 최솟값을 구한다.
    }
    printf("%d\n",sum);
    return 0;
}
