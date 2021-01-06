#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    if(n>=1&&n<=1000)
        for(i=0;i<=n;i++){
            if(i%2==1){
               printf("%d\n",i);
            }
        }
    return 0;
}
