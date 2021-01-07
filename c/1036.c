#include<stdio.h>
#include <math.h>

int main(){
    float a,b,c,rp,rn,delta;
    scanf("%f %f %f",&a,&b,&c);
    delta = b*b - 4*a*c;
    if(delta >=0 && a>0){
        rp = (-b + sqrt(delta)) / (2*a);
        rn = (-b - sqrt(delta)) / (2*a);
        printf("R1 = %.5f\n",rp);
        printf("R2 = %.5f\n",rn);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}
