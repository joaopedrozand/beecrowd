#include<stdio.h>

int main(void){
	int i,j,coluna;
	float m[12][12],aux=0;
	char op;
	scanf("%d\n%c",&coluna,&op);
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f",&m[i][j]);
			if(coluna==j)
				aux+=m[i][j];
		}
	}
	if(op=='S')
		printf("%.1f\n",aux);
	if(op=='M')
		printf("%.1f\n",aux/12);
	return 0;
}
