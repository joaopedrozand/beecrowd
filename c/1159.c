#include <stdio.h>
int main (){
    int i,x=1,soma,aux=1;
    while(aux!=0){
        scanf("%d",&x);
        aux=x;
        if(x!=0) {
            soma = 0;
            for (i = 0; i < 5; i++, x += 2) {
                if (x % 2 != 0)x += 1;
                soma += x;
            }
            printf("%d\n", soma);
        }
    }
    return 0;
}
