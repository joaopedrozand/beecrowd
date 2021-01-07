#include<stdio.h>
int main(){
    int cod_peca[2],num_peca[2], i;
    float valor_peca[2];
    for(i = 0;i<2;i++){
        scanf("%d%d%f",&cod_peca[i],&num_peca[i],&valor_peca[i]);
    }
    printf("VALOR A PAGAR: R$ %.2f\n",(num_peca[0]*valor_peca[0])+(num_peca[1]*valor_peca[1]));
    return 0;
}
