#include <stdio.h>
typedef struct human{
    int nw;
    char name[10];
} human;
typedef struct stay{
    int lr;
    int num;
} stay;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    human P[n+1];
    stay W[m];
    int i,j=1;
    for (i=1;i<=n;i++){
        scanf("%d %s",&P[i].nw,&P[i].name);
    }
    for (i=0;i<m;i++){
        scanf("%d %d",&W[i].lr,&W[i].num);
        if(P[j].nw==W[i].lr){
            j=j-W[i].num;
            while(j<=0) j+=n; 
        }else{
            j=j+W[i].num;
            while(j>n) j-=n;
        }
    }
    printf("%s",P[j].name);
    return 0;
}