#include<stdio.h>
int main(){
    int i,x,y,soma,n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++) {
        soma=0;
        scanf("%d %d", &x, &y);
        if (x > y) {
            x = x + y;
            y = x - y;
            x = x - y;
        }
        for (i = x+1; i < y; i++) {
            if (i % 2 != 0)
                soma += i;
        }
        printf("%d\n", soma);
    }
    return 0;
}
