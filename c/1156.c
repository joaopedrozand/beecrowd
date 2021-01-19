#include <stdio.h>
double seq(int n, int d){
    return (float)n/(float)d;
}
int main (){
    int i,d=1;
    double s=0;
    for(i=1;i<39;i+=2){
        s+=seq(i,d);
        d*=2;
    }
    printf("%.2f\n",s);
    return 0;
}
