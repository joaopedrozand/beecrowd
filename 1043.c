#include<stdio.h>
int main(){
    double a,b,c,area;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>0&&b>0&&c>0){
        if(a>=b+c || b>=c+a || c>=a+b){
            printf("Area = %.1f\n",((a+b)*c)/2);
        }
        else{
            printf("Perimetro = %.1f\n",a+b+c);
        }
    }
    return 0;
}
