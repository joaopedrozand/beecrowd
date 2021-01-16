#include<stdio.h>
int main(){
    int total,c=0,r=0,s=0,n,i,a;
    char aux;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&a,&aux);
        if(aux=='C') c+=a;
        else if(aux == 'R') r+=a;
        else if(aux =='S') s+=a;
    }
    total = c+r+s;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",c/(float)total*100);
    printf("Percentual de ratos: %.2f %%\n",r/(float)total*100);
    printf("Percentual de sapos: %.2f %%\n",s/(float)total*100);
    return 0;
}
