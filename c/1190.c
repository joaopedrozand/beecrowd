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
	for(j=7;j<12;j++){
		for(i=12-j;i<=j-1;i++)
			aux+=m[i][j];
	}
	if(op=='S')
		printf("%.1lf\n",aux);
	if(op=='M')
		printf("%.1lf\n",aux/30);
	return 0;
}
