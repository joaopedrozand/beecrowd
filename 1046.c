#include <stdio.h>
int main() {
    int hi,hf,q=0;
    scanf("%d %d",&hi,&hf);
    if(hi==hf) q=24;
    else do{
            q++;
            hi++;
            if(hi==24)
                hi=0;
        }while(hi!=hf);
    printf("O JOGO DUROU %d HORA(S)\n",q);
    return 0;
}
