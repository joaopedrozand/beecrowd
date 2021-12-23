#include<stdio.h>

int main(void){
	char op;
	float m[12][12],aux=0;
	int i,j;
	scanf("%c",&op);
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f",&m[i][j]);
		}
	}
	for(i=0;i<11;i++){
		for(j=0;j<11-i;j++)
			aux+=m[i][j];
	}
	if(op=='S')
		printf("%.1f\n",aux);
	if(op=='M')
		printf("%.1f\n",aux/66);
	return 0;
}
