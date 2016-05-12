//https://www.acmicpc.net/problem/2608
//2016.04.12

#include <stdio.h>
#include <string.h>

int rome[26]= {0,};

void rome_init();
int to_int(char *rome);
char * to_rome(int num);

int main(){
	char in[2000];
	scanf("%s",in);
	rome_init();
	//printf("%d",to_int(in));
	to_rome(9);
	return 0;
}

///////

void rome_init(){
	rome['M'-'A'] = 1000;
	rome['D'-'A'] = 500;
	rome['C'-'A'] = 100;
	rome['L'-'A'] = 50;
	rome['X'-'A'] = 10;
	rome['V'-'A'] = 5;
	rome['I'-'A'] = 1;
}

int to_int(char *rNumber){
	int ret = 0;
	for(int i = 0 ; i<strlen(rNumber) ; i++){
		if(rome[rNumber[i]-'A'] < rome[rNumber[i+1]-'A']){ 
			//뒷 글자가 지금 글자보다. 값이 클때
			ret = ret + rome[rNumber[i+1]-'A'] - rome[rNumber[i]-'A'];
			i ++;
		}
		else{
			//그냥일때
			ret += rome[rNumber[i]-'A'];
		}
	}
	return ret;
}

char * to_rome(int num){
	char ret[2000] = {0,};
	int i = 0;
	/*
	while( num !=0 ){
		if(num % 1000){
			ret[i++] = 'M';
			num -= 1000;
		}
		else if(num % 100){
			if (num % 100 == 9){
				ret[i++] = 'C';
				ret[i++] = 'M';
				num = num - 900;
			}
			else if(num % 100 == 5){
				ret[i++] = 'D';
				num = num - 500;
			}
			else if (num % 100 == 4){
				ret[i++] = 'C';
				ret[i++] = 'D';
				num = num - 400;
			}
			else{
				ret[i++] = 'C';
				num = num - 100;
			}

		}
		else if(num % 10){
			if( num % 10 == 9){
				ret[i++] = 'X';
				ret[i++] = 'C';
				num = num - 90;
			}
			else if(num % 10 == 5){
				ret[i++] = 'L';
				num = num -50;
			}
			else if (num % 10 == 4){
				ret[i++] = 'X';
				ret[i++] = 'L';
				num = num -40;
			}
			else{
				ret[i++] = 'X';
				num = num -10;
			}
		}
		else{
			if(num == 9){
				ret[i++] = 'I';
				ret[i++] = 'X';
				num = num -9;
			}
			else if(num == 5){
				ret[i++] = 'V';
				num = num -5;
			}
			else if(num == 4){
				ret[i++] = 'I';
				ret[i++] = 'V';
				num = num -4;
			}
			else{
				ret[i++] = 'I';
				num = num - 1;
			}
		}

	}
	*/
	ret[i++] = 'A';
	ret[i++] = '\0';
	printf("%s",ret);
	return ret;
}