#include<stdio.h>
int main(){
    int i,j,aux=7;
    for(i=1;i<=9;i+=2) {
        for (j=0;j<3;j++,aux-=1) {
            printf("I=%d J=%d\n", i, aux);
        }
    aux+=5;
    }
    return 0;
}
