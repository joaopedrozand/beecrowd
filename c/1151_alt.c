#include<stdio.h>
int fibonacci(int n){
    if(n==0||n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n,i;
    scanf("%d",&n);
    if(n>0&&n<46)
        for(i=0;i<n;i++){
            printf("%d",fibonacci(i));
            if(i<=n)printf(" ");
        }
    printf("\n");
    return 0;
}
