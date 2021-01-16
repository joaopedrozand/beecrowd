#include<stdio.h>
int main(){
    int x,y,i,soma;
    do{
        soma=0;
        scanf("%d %d",&x,&y);
        if(x>y){
            x = x + y;
            y = x - y;
            x = x - y;
        }
        if(x<=0||y<=0)break;
        for(i=x;i<=y;i++){
            printf("%d ",i);
            soma+=i;
        }
        printf("Sum=%d\n",soma);
    }while(x>0&&y>0);
    return 0;
}
