#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  

   char *label_nome[30];
   char *label_email[50];
   char *label_telefone[15];
   char *label_idade[4];

   char *input_nome;
   char *input_email;
   char *input_telefone;
   char *input_idade;



    //ponteiro que armazena o endereço de memoria do
    //arquivo
    FILE *cadastro;
    cadastro = fopen("files/cadastro.txt","a+");

    printf("manda teu nome todo ai parceiro:\n");
    fgets (input_nome,30,stdin);
    printf("manda o numero pá nós: ");

    // posicionar o cursor ao final da linha
    fseek(cadastro,0,SEEK_END);
    fputs(label_nome,cadastro);
    fputs(input_nome,cadastro);

/**
    printf("agora teu e-mail cz:\n");
    fgets (input_email,50,stdin);
    fseek(cadastro,0,SEEK_END);
    fputs(label_email,cadastro);
    fputs (input_email,cadastro);
*/
fseek(cadastro,0,SEEK_END);
fputs ("---------------------------------------------------------------",cadastro);
fclose (cadastro);
printf ("\nAgora tu faz parte da fac cz:\n");

return 0;

}