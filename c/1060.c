#include <stdio.h>
int main() {
    int i,qt=0;
    float n;
    for(i=0;i<6;i++){
        scanf("%f",&n);
        if(n>0)qt++;
    }
    printf("%d valores positivos\n",qt);
    return 0;
}
