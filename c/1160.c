#include<stdio.h>
int main(){
    int t,pa,pb,i,tempo;
    double ga,gb;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&pa,&pb);
        scanf("%lf %lf",&ga,&gb);
        tempo=0;
        do{
            pa= pa + (pa*ga)/100;
            pb= pb + (pb*gb)/100;
            tempo++;
        }while(pa<=pb && tempo<=100);
        if(tempo<=100)printf("%d anos.\n",tempo);
        else printf("Mais de 1 seculo.\n");
    }
    return 0;
}
