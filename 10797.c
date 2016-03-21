#include <stdio.h>

int main(){
	int a;
	int b[5];

	scanf("%d",&a);
	scanf("%d %d %d %d %d"
		, &b[0]
		, &b[1]
		, &b[2]
		, &b[3]
		, &b[4]);

	int ret = 0;
	for (int i = 0 ; i < 5; i++)
	{	
		if ( a == b[i])
			ret ++;
	}
	
	printf("%d",ret);
	return 0;
}
