#include <cstdio>

int main(){
	int N;
	int ret=0;

	scanf("%d",&N);
	int vote;
	while(N--){
		scanf("%d",&vote);
		if(vote) ret++;
		else ret --;
	}
	
	printf("Junhee is %s\n",ret > 0 ? "cute!" : "not cute!");
	return 0;
}