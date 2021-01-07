#include <stdio.h>
int main() {
    int n[10000],x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++)
        scanf("%d",&n[i]);
    for(i=0;i<x;i++){
        if(n[i]==0)printf("NULL\n");
        else if(n[i]%2==0)printf("EVEN ");
        else printf("ODD ");
        if(n[i]>0)printf("POSITIVE\n");
        else if(n[i]<0)printf("NEGATIVE\n");
    }
    return 0;
}
