#include<stdio.h>
double func(char op){
	double aux=0,m[12][12];
	int i,j;
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf",&m[i][j]);
		}
	}
	for(i=0;i<=4;i++){
		for(j=i+1;j<=10-i;j++){
			aux+=m[i][j];
		}
	}
	if(op=='S')
		return aux;
	if(op=='M')
		return aux/30;
}
int main(void){
	char op;
	scanf("%c",&op);
	printf("%.1lf\n",func(op));
	return 0;
}
