#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=4*n;i++)
            if(i%4!=0)
                printf("%d ",i);
            else
                printf("PUM\n");
    return 0;
}
