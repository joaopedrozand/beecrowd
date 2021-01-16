#include<stdio.h>
int main(){
    int i,n=1;
    do{
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            printf("%d",i);
            if(i!=n)printf(" ");
            else printf("\n");
        }
    }while(n!=0);
    return 0;
}
