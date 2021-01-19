#include <stdio.h>
int main (){
    int i,qt,n,j,primo;
    scanf("%d",&qt);
    for(i=0;i<qt;i++){
        scanf("%d",&n);
        primo=0;
        for(j=1;j<=n;j++)
            if(n%j==0)primo++;
        if(primo==2)printf("%d eh primo\n",n);
        else printf("%d nao eh primo\n",n);
    }
    return 0;
}
