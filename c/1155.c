#include <stdio.h>
double seq(int n){
    return 1.0/n;
}
int main (){
    int i;
    double s=0;
    for(i=1;i<=100;i++)
        s += seq(i);
    printf("%.2f\n",s);
    return 0;
}
