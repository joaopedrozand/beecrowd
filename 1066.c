#include <stdio.h>
int main() {
    int n,i,par=0,pos=0;
    for(i=0;i<5;i++){
        scanf("%dn",&n);
        if(n%2==0)par++;
        if(n>0)pos++;
    }
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",5-par);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",5-par);
    return 0;
}
