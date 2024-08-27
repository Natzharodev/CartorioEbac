#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de textos por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro()
{
  char arquivo[40];
  char cpf[40];
  char nome[40];
  char sobrenome[40];
  char cargo[40];
 
 printf("Digite o CPF a ser cadastrado: ");
 scanf("%s", cpf);

 strcpy(arquivo, cpf); //Responsável por copiar os valores da string

 FILE *file; //cria o arquivo
 file = fopen(arquivo, "w");
 fprintf(file,cpf); //salva o valor da variável
 fclose(file); //fecha o arquivo

 file = fopen(arquivo, "a");
 fprint(file,nome);
 fclose(file);

file = fopen(arquivo, "a");
 fprint(file, ",");
 fclose(file);
 

 printf("Digite o sobrenome a ser cadastrado: ");
 scanf("%s", sobrenome);

 file = fopen(arquivo, "a");
 fprint(file,sobrenome);
 fclose(file);
 
 file = fopen(arquivo, "a");
 fprint(file, ",");
 fclose(file);

 printf("Digite o cargo a ser cadastrado: ");
 scanf("%s",cargo);

 file = fopen(arquivo, "a");
 fprint(file,cargo);
 fclose(file);

 system("pause");
}

int consulta()
{
 setlocale(LC_ALL, "Portuguese");
  
  char cpf[40];
  char conteudo[200];

  printf("Digite o CPF a ser consultado: ");

   printf("Não foi possível abrir o arquivo, não loalizado! \n")
   
   while(fgets(conteudo, 200, file) != NULL);

   printf("Não foi possível abrir o arquivo, não localizado! \n");

  
 }


 {
 
   printf("\nEssas são as informações do usuário: ");
   printf("%s", conteudo);
   printf("\n\n");

   system("pause");
}
}

int deletar()
{
 char cpf[40];

  printf("Digite o CPF do usuário a ser deletado: ");
  scanf("%s" ,cpf);

  remove(cpf);

  FILE *file;
  file = fopen(cpf, "r");

  if(file == NULL)
 }


}




int main()
{

    int opcao=0; //definindo variáveis
    int laco=1;
   
   for(laco=1;laco=1;)
   {


   
    setlocale(LC_ALL, "Portuguese"); //definindo a linguagem

    system ("cls");

printf( "  Cartörio da EBAC   \n\n"); //início do meu
printf( "Escolha a opção desejada no menu\n\n"  );
printf("\t1 - Registrar nomes\n");
printf("\t2 - Consultar nomes\n");
printf("\t3 -  Deletar nomes\n");
printf("Opção:"); //fim do menu

scanf("%d", &opcao); //armazenamento e escolha de usuário

system ("cls");


switch(opcao)
{

case 1:
registro();
break;


case 2:
consulta();
break;

case 3:
deletar();
break;

default:
printf("Essa opção não está disponível!");
system("pause");
break;


}   

}   

}
 





