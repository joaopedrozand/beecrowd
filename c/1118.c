#include<stdio.h>
int main(){
    float x=-1,y=-1;
    int op=1,c=0;
    do{
        c=0;
        y=0;
        do{
            scanf("%f",&x);
            if(x<0||x>10)
                printf("nota invalida\n");
            else {
                c++;
                y+=x;
            }
        }while(c<2);
        printf("media = %.2f\n",y/2);
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
        }while(op<1||op>2);
    }while(op != 2);
    return 0;
}
