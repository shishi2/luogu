#include <stdio.h>
typedef struct human{
    int nw;
    char name[10];
} human;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    human P[n+1];
    int i,j=1;
    for (i=1;i<=n;i++){
        scanf("%d %s",&P[i].nw,&P[i].name);
    }
    int lr,num;
    for (i=0;i<m;i++){
        scanf("%d %d",&lr,&num);
        if(P[j].nw==lr){
            j=j-num;
            while(j<=0) j+=n; 
        }else{
            j=j+num;
            while(j>n) j-=n;
        }
    }
    printf("%s",P[j].name);
    return 0;
}