#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

char str[600000];

int main() {
    stack<char> left, right;
    scanf("%s",str);

    for(int i = 0 ; i < strlen(str) ; i++)
        left.push(str[i]);

    int N;
    scanf("%d",&N);
    
    for(int i =0 ; i< N ; i++){
        char cmd;
        scanf(" %c",&cmd);

        switch(cmd){
            case 'L':
                if(left.empty()) break;
                right.push(left.top());
                left.pop();
                break;
            
            case 'D': 
                if(right.empty()) break;
                left.push(right.top());
                right.pop();
                break;
            
            case 'B':
                if(left.empty()) break;
                left.pop();
                break;
            
            case 'P': 
                char in;
                scanf("%c",&in);
                left.push(in);
                break;
        }
    }

    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }

    while(!right.empty()){
        printf("%c",right.top());
        right.pop();
    }

    printf("\n");
    return 0;
}