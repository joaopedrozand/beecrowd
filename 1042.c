#include<stdio.h>
int main(){
    int v[3],aux,i,j,o[3];
    scanf("%d %d %d",&v[0],&v[1],&v[2]);
    o[0] = v[0];
    o[1] = v[1];
    o[2] = v[2];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(v[i]<v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    printf("%d\n%d\n%d\n\n",v[0],v[1],v[2]);
    printf("%d\n%d\n%d\n",o[0],o[1],o[2]);
    return 0;
}
