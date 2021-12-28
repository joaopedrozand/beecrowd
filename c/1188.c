#include<stdio.h>

int main(void){
	char op;
	double m[12][12],aux=0;
	int i,j;
	scanf("%c",&op);
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf",&m[i][j]);
		}
	}
	for(i=7;i<12;i++){
		for(j=12-i;j<=i-1;j++)
			aux+=m[i][j];
	}
	if(op=='S')
		printf("%.1lf\n",aux);
	if(op=='M')
		printf("%.1lf\n",aux/30);
	return 0;
}
