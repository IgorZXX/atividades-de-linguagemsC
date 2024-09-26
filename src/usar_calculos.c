#include <stdio.h>
#include "../lib/calculos.h"

int main(){
    int numeros[8] = {7,12,8,45,31,52,102,34};
    printf("a soma dos num eors é %d\n",soma (numeros,8));
    printf("a media dos numeros é %d\n",media(numeros,8));
    printf("o numeros pares do array são/n");
    pares(numeros,8);
    return 0;

}