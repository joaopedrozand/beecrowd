#include<stdio.h>
int main(){
    int km;
    float consumo;
    scanf("%d%f",&km,&consumo);
    printf("%.3f km/l\n",km/consumo);
    return 0;
}
