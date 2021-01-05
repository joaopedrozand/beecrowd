#include <stdio.h>
#include<string.h>
int main() {
    char grupo[12],classe[12],ordem[12];
    fflush(stdin);
    scanf("%s\n%s\n%s",&grupo,&classe,&ordem);
    if(strcmp(grupo,"vertebrado")==0){
        if(strcmp(classe,"ave")==0){
            if(strcmp(ordem,"carnivoro")==0){
                printf("aguia\n");
            }else {
                printf("pomba\n");
            }
        }else{
            if(strcmp(ordem,"onivoro")==0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        if(strcmp(classe,"inseto")==0){
            if(strcmp(ordem,"hematofago")==0){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if(strcmp(ordem,"hematofago")==0){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
