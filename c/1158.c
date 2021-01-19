#include <stdio.h>
int main (){
    int i,n,x,y,soma,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        soma=0;
        for(j=0;j<y;j++){
            if(x%2==0)x+=1;
            soma+=x;
            x+=2;
        }
        printf("%d\n",soma);
    }
    return 0;
}
