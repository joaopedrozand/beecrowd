#include<stdio.h>
int main(){
    double n[100];
    int i;
    scanf("%lf",&n[0]);
    for(i=0;i<99;i++){
        n[i+1]=n[i]/2;
    }
    for(i=0;i<100;i++){
        printf("N[%d] = %.4f\n",i,n[i]);
    }
    return 0;
}
