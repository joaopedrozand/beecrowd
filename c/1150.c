#include<stdio.h>
int main(){
    int x,z,i,soma,qt=1;
    scanf("%d %d",&x,&z);
    while(z<=x)scanf("%d",&z);
    soma=x;
    for(i=x;soma<=z;i++){
        soma+=i;
        qt++;
    }
    printf("%d\n",qt);
    return 0;
}
