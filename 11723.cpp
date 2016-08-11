#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);

	int ret=0;
	char cmd[20];
	while(N--){
		int val=0;
		scanf("%s",cmd);

		if(!strcmp(cmd,"add")){
			scanf("%d",&val);val--;
			ret |= (1<<val);
		}
		else if(!strcmp(cmd,"remove")){
			scanf("%d",&val);val--;
			ret &= ~(1<<val);
		}
		else if(!strcmp(cmd,"check")){
			scanf("%d",&val);val--;
			int temp=ret;
			if(temp &= (1<<val))
				printf("1\n");
			else
				printf("0\n");
		}
		else if(!strcmp(cmd,"toggle")){
			scanf("%d",&val);val--;
			ret ^= (1<<val);
		}
		else if(!strcmp(cmd,"all")){
			ret = (1<<20)-1;
		}
		else if(!strcmp(cmd,"empty")){
			ret  = 0;
		}
	}
	return 0;
}