#include<stdio.h>
int main(){
    int cod, qt;
    scanf("%d %d",&cod,&qt);
    switch(cod){
        case 1:
            printf("Total: R$ %.2f\n",4.0*qt);
            break;
        case 2:
            printf("Total: R$ %.2f\n",4.5*qt);
            break;
        case 3:
            printf("Total: R$ %.2f\n",5.0*qt);
            break;
        case 4:
            printf("Total: R$ %.2f\n",2.0*qt);
            break;
        case 5:
            printf("Total: R$ %.2f\n",1.5*qt);
            break;
        default:
            break;
    }
    return 0;
}
