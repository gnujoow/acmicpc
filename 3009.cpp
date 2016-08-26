#include <cstdio>

int n, m;
int x,y;

int main(){
	for(int i= 0 ; i < 3 ; i++){
		scanf("%d %d",&m, &n);
		x^= m;
		y^= n;
	} 
	
	printf("%d %d\n",x,y);

	return 0;
}