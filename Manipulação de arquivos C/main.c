#include <stdio.h>



#include <stdlib.h>



int main(void)



{



    char nome[10], opcao;

    int matricula, cpf, um, dois, tres;





printf("Digite a matricula\n");



scanf("%d", &matricula);



printf("Digite o seu nome\n");



scanf("%s", &nome);



printf("Digite o seu CPF\n");



scanf("%d", &cpf);







FILE *te;



te=fopen("resultado.txt","w");



fprintf(te," a matricula eh %d\n", matricula);

fprintf(te," o nome eh %d\n", nome);

fprintf(te," o CPF eh %d\n", cpf);





fclose(te);





printf("deseja ver o registro no final?(s/n)\n");

scanf("%c", opcao);



switch(opcao){



case 'n':

    printf("tchau\n");





  case 's':

    te=fopen("resultado.txt","r+");

   fscanf(te,"%d",um);

   fscanf(te,"%d",dois);

   fscanf(te,"%d",tres);



   printf("%d\n", um);

   printf("%d\n", dois);

   printf("%d\n", tres);



   fclose(te);
}

return 0;
}

