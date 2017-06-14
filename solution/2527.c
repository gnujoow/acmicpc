//https://www.acmicpc.net/problem/2527
//2016.04.14

#include <stdio.h>
#define test 1
int main(){
#if test
	freopen("input.txt", "r", stdin);
#endif

	int x1,x2,y1,y2,p1,p2,q1,q2;

	for(int i =0 ; i< 4; i++){
		scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&p1,&q1,&x2,&y2,&p2,&q2);

		if(q1 < y2 || p1 < x2 || y1 > q2 || x1 > p2 )
		{
			printf("%c\n",'d'); 	//이탈
			continue;
		}
		
		if((x1 == p2 && y1 == q2) || (p1 == x2 && y1 == q2) || (p1 == x2 && q1 == y2) || (x1 == p2 && q1 == y2))
		{
			printf("%c\n",'c');		//점
			continue;
		}
		
		if(q1 == y2 || p1 == x2 || y1 == q2 || x1 == p2){
			printf("%c\n",'b');		//선
			continue;
		}
		else{
			printf("%c\n",'a');		//겹침
			continue;
		}
	}
	return 0;
}