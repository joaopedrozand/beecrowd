#include<stdio.h>
int main(){
    int r,m;
    double f;
    scanf("%lf", &f);
    r = f/1;
    m = ((int)(f*10000)%10000)/100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",r/100);
    if(r>=100) r%=100;
    printf("%d nota(s) de R$ 50.00\n",r/50);
    if(r>=50) r%=50;
    printf("%d nota(s) de R$ 20.00\n",r/20);
    if(r>=20)r%=20;
    printf("%d nota(s) de R$ 10.00\n",r/10);
    if(r>=10)r%=10;
    printf("%d nota(s) de R$ 5.00\n",r/5);
    if(r>=5) r%=5;
    printf("%d nota(s) de R$ 2.00\n",r/2);
    if(r>=2) r%=2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",r);
    printf("%d moeda(s) de R$ 0.50\n",m/50);
    if(m>=50) m%=50;
    printf("%d moeda(s) de R$ 0.25\n",m/25);
    if(m>=25) m%=25;
    printf("%d moeda(s) de R$ 0.10\n",m/10);
    if(m>=10) m%=10;
    printf("%d moeda(s) de R$ 0.05\n",m/5);
    if(m>=5) m%=5;
    printf("%d moeda(s) de R$ 0.01\n",m);
    return 0;
}
