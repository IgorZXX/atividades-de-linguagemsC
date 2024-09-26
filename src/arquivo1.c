#include <stdio.h>
//trabalhar com arquivos//impoprtar a bliblioteca stdlib
#include <stdlib.h>
//importar a bliblioteca de texto(sting) para escrever
//em arquivo de texto
#include <string.h>

int main (){
    system("clear"); //limpa o terminal
    //declarcão da variável palavra como um ponteiro
    //para guardar os caracteres que forma uma string

    char palavra[20];
    char *label_nome = "nome: ";
    printf("Digite seu nome completo:\n");
    //scanf("%s",palavra);
    //o comando fgets(f- file | gets -> obter). assim iremos
    // obter o texto que o usuario esta digitando no rerminal.
    //definimos tambem a quantidade de caracteres aceitos pelo
    //fgets e o parametro stdin (std ->strandard | in -> entrada)
    //ele olha para a entrada padrão, que neste caso é o teclado
    //pelo terminal

    fgets(palavra,20,stdin);

    FILE *ar;
    ar =fopen("teste.txt","a+");
    fputs(palavra,ar);

    fseek(ar,0,SEEK_END);
    fputs(label_nome,ar);

    printf("o arquivo esta no endereço:%p\n",ar);
    fclose(ar);
    return 0;

}