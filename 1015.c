#include <stdio.h>
#include <math.h> 
int main() {
    double x[2],y[2],d;
    scanf("%lf%lf%lf%lf",&x[0],&y[0],&x[1],&y[1]);
    d = sqrt(pow(x[0]-x[1],2)+pow(y[0]-y[1],2));
    printf("%.4lf\n",d);
    return 0;
}
