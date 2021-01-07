#include <stdio.h>
int main() {
    int di, hi, mi, si, df, hf,mf, sf, qd, qh, qm, qs;
    scanf("Dia %d",&di);
    scanf("%d : %d : %d\n", &hi, &mi, &si);
    scanf("Dia %d", &df);
    scanf("%d : %d : %d", &hf, &mf, &sf);
    qd = df - di;
    qh = hf - hi;
    qm = mf - mi;
    qs = sf - si;
    if(qs<0){
        qs+=60;
        qm--;
    }
    if(qm<0){
        qm+=60;
        qh--;
    }
    if(qh<0){
        qh+=24;
        qd--;
    }
    printf("%d dia(s)\n",qd);
    printf("%d hora(s)\n",qh);
    printf("%d minuto(s)\n",qm);
    printf("%d segundo(s)\n",qs);
    return 0;
}
