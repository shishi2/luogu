#include <stdio.h>

int main(){
    int num1;
    scanf("%d",&num1);
    int num = num1>>1;
    
    int i=2;
    for(i=2;i<=num;i++){
        if(num1%i==0){
            printf("%d",(num1/i));
            return 0;
        }
    }
}
