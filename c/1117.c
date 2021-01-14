#include<stdio.h>
int main(){
    float n[2]={-1,-1},aux;
    int i;
    for(i=0;i<2;i++)
        while(n[i]<0||n[i]>10) {
            scanf("%f",&aux);
            if (aux > 0 && aux <= 10)
                n[i] = aux;
            else
                printf("nota invalida\n");
        }
    printf("media = %.2f\n",(n[0]+n[1])/2);
    return 0;
}
