#include <stdio.h>
int main (){
    int i=0,total=0,qt=0;
    while(i>=0){
        scanf("%d",&i);
        if(i>=0){
            total+=i;
            qt++;
        }
    }
    printf("%.2f\n",total/(float)qt);
    return 0;
}
