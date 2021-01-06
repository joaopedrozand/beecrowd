#include <stdio.h>
int main() {
    float n=0,media=0;
    int i,qp=0;
    for(i=0;i<6;i++){
        scanf("%f",&n);
        if(n>0){
            qp++;
            media+=n;
        }
    }
    printf("%d valores positivos\n",qp);
    printf("%.1f\n",media/qp);
    return 0;
}
