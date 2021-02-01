#include<stdio.h>
int main(){
    int i,maior,posic,n;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    maior=x[0];
    posic=0;
    for(i=0;i<n;i++)
        if(x[i]<maior){
            maior = x[i];
            posic = i;
        }
    printf("Menor valor: %d\nPosicao: %d\n",maior,posic);
    return 0;
}
