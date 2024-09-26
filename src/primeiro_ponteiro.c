#include <stdio.h>

int main(){
    int valor = 30;
    int *pvalor = &valor;
    printf("valor da variavel é %d e o endereço de memória é %p\n",valor, &valor);
    printf("o endereço de pvalor é %p e o valor é %d\n",pvalor,*pvalor);
    return 0;
}