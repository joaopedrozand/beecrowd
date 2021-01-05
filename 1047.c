#include <stdio.h>
int main() {
    int hi, mi, hf, mf,qh=0,qm=0;
    scanf("%d%d%d%d",&hi,&mi,&hf,&mf);
    do{
        qh++;
        hi++;
        if(hi==24)
            hi = 0;
    }while(hi!=hf);
    if(mi>mf){
        mf+=60;
        qm=mf-mi;
        qh-=1;
    }
    else
        if(mi==mf){qm=0;}
        else
            do{
                qm++;
                mi++;
                if(mi==60)
                    mi = 0;
            }while(mi!=mf);
            if(qh==24 && qm >0){
                qh=0;
            }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",qh,qm);
    return 0;
}
