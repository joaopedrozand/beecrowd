#include<stdio.h>
int main(){
    int d,m,a;
    scanf("%d",&d);
    a=d/365;
    d%=365;
    m=d/30;
    d%=30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    return 0;
}
