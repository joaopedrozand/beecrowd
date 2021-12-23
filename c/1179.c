#include<stdio.h>

int main(void){
	int par[5], impar[5],i,j,aux,ci,cp;
	ci=0;
	cp=0;
	for(i=0;i<15;i++){
		scanf("%d",&aux);
		if(aux%2==0){
			par[cp]=aux;
			cp++;
		}
		else{
			impar[ci]=aux;
			ci++;
		}
		if(cp>4){
			for(j=0;j<5;j++)
				printf("par[%d] = %d\n",j,par[j]);
			cp=0;
		}
		if(ci>4){
			for(j=0;j<5;j++)
				printf("impar[%d] = %d\n",j,impar[j]);
			ci=0;
		}
	}
	for(i=0;i<ci;i++)
		printf("impar[%d] = %d\n",i,impar[i]);
	for(i=0;i<cp;i++)
		printf("par[%d] = %d\n",i,par[i]);
	return 0;
}
