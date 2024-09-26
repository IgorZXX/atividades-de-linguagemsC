#include <stdio.h>

 void alterar(int *ponteiro){
    *ponteiro = 200;

 }

int main(){

int valor = 32;
printf("o valor da variavel é %d. o endereço é %p\n",valor, &valor);
alterar(&valor);
printf("o valor da variavel é %d. o endereço é %p\n", valor, &valor);



return 0;


}