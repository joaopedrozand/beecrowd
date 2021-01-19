#include <stdio.h>
int main (){
    int i,qt,n,j,soma;
    scanf("%d",&qt);
    for(i=0;i<qt;i++){
        scanf("%d",&n);
        soma=0;
        for(j=1;j<n;j++)
            if(n%j==0)soma+=j;
        if(soma==n)printf("%d eh perfeito\n",n);
        else printf("%d nao eh perfeito\n",n);
    }
    return 0;
}
