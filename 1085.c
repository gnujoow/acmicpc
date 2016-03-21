#include <stdio.h>
#include <stdlib.h>

int main()
{
	//첫째 줄에 x y w h가 주어진다. w와 h는 1,000보다 작거나 같은 자연수이고, x는 1보다 크거나 같고, w-1보다 작거나 같은 자연수이고, y는 1보다 크거나 같고, h-1보다 작거나 같은 자연수이다.
	int border[4];
	scanf("%d %d %d %d"
		,&border[0]
		,&border[1]
		,&border[2]
		,&border[3]);

	border[2] = abs(border[2]-border[0]);
	border[3] = abs(border[3]-border[1]);


	int min = 1001;
	for (int i =0 ; i <4; i++)
	{
		if (border[i] < min )
			min = border[i];
	}

	printf("%d",min);

	return 0;
}
