#include<stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int aux = (a+b+abs(a-b))/2;
    printf("%d eh o maior\n",(aux+c+abs(aux-c))/2);
    return 0;
}
