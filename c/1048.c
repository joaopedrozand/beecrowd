#include <stdio.h>
int main() {
    float salario,reajuste;
    scanf("%f",&salario);
    if(salario<=400)reajuste = 0.15;
    else if(salario>400&&salario<=800)reajuste = 0.12;
    else if(salario>800&&salario<=1200)reajuste = 0.1;
    else if(salario>1200&&salario<=2000)reajuste = 0.07;
    else if(salario>2000)reajuste = 0.04;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %0.f %%\n",salario+(salario*reajuste),salario*reajuste,reajuste*100);
    return 0;
}
