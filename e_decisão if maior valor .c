#include<stdio.h>
#include<stdlib.h>

int main(){

int num1,num2;

    printf("insira dois numeros para descobri o maior\n");
    scanf("%d %d", &num1,&num2);

        if(num1<num2){
            printf(" Esse e maior>>> %d\n",num2);
        }else {
            printf("Esse e Maior>>> %d\n",num1);
        }


    return 0;
}
