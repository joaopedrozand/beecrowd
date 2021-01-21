#include <stdio.h>
int main (){
    int n[1000],t,i,j=0;
    scanf("%d",&t);
    for(i=0;i<1000;i++){
        n[i]=j;
        if(j<t-1)j++;
        else j=0;
    }
    for(i=0;i<1000;i++)
        printf("N[%d] = %d\n",i,n[i]);
    return 0;
}
