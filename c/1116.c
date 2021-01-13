#include<stdio.h>
int main(){
    int x,y,n,i;
    double div;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(y!=0)
            printf("%.1f\n",(double)x/y);
        else
            printf("divisao impossivel\n");
    }
    return 0;
}
