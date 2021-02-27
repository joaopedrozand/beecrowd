#include<stdio.h>
long long int fib(int n){
    long long int a=0,b=1,c=0;
    int i;
    if(n==0||n==1)
        return a;
    else
        for (i = 2; i < n; i++){
            a = b;
            b = c;
            c = a + b;
        }
    return c+b;
}
int main(){
    int t,i;
    int n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("Fib(%d) = %lld\n",n,fib(n+1));
    }
    return 0;
}
