#include<stdio.h>
int main(){
    int x,y,op,qt=0,inter=0,gremio=0,empates=0;
    while(1){
        scanf("%d%d",&x,&y);
        if(x>y){
            inter++;
        }
        if(x<y){
            gremio++;
        }
        if(x==y){
            empates++;
        }
        qt++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&op);
        if(op==2){
            break;
        }
    }
    printf("%d grenais\n",qt);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",empates);
    if(inter>gremio){
        printf("Inter venceu mais\n");
    }
    else if(inter<gremio){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Empates venceu mais\n");
    }
    return 0;
}
