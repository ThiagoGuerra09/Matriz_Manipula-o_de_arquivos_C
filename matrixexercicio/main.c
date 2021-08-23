#include <stdio.h>

#include <stdlib.h>

# define TAM 2

int main()

{

    int  i, p, m, j, cont=0;

    int matrix[5][3], vetor[5], teste=0, pe[5], mao[5], pedo[5], man[5];



printf("Digite os valores!\n");

for(i=0;i<5;i++){

        for(j=0;j<3;j++){



scanf("%d", &matrix[i][j]);



     }

}

vetor[0]=0;

vetor[1]=0;

vetor[2]=0;

vetor[3]=0;

vetor[4]=0;

for(i=0;i<5;i++){

        for(j=0;j<3;j++){



    if(i==0){

        if(j==0){

            pe[i]=matrix[i][j]*15;

        }

       if(j==1){

            mao[i]=matrix[i][j]*20;

        }

         if(j==2){

            pedo[i]=matrix[i][j]*30;

        }

        man[i]=pe[i]+mao[i]+pedo[i];



    }





    if(i==1){

          if(j==0){

            pe[i]=matrix[i][j]*15;

        }

       if(j==1){

            mao[i]=matrix[i][j]*20;

        }

         if(j==2){

            pedo[i]=matrix[i][j]*30;

        }

        man[i]=pe[i]+mao[i]+pedo[i];

    }

     if(i==2){

          if(j==0){

            pe[i]=matrix[i][j]*15;

        }

       if(j==1){

            mao[i]=matrix[i][j]*20;

        }

         if(j==2){

            pedo[i]=matrix[i][j]*30;

        }

        man[i]=pe[i]+mao[i]+pedo[i];

     }

      if(i==3){

          if(j==0){

            pe[i]=matrix[i][j]*15;

        }

       if(j==1){

            mao[i]=matrix[i][j]*20;

        }

         if(j==2){

            pedo[i]=matrix[i][j]*30;

        }

        man[i]=pe[i]+mao[i]+pedo[i];

     }

      if(i==4){

          if(j==0){

            pe[i]=matrix[i][j]*15;

        }

       if(j==1){

            mao[i]=matrix[i][j]*20;

        }

         if(j==2){

            pedo[i]=matrix[i][j]*30;

        }

        man[i]=pe[i]+mao[i]+pedo[i];

     }





    }

}



FILE *faturamento;



faturamento = fopen("Faturamento.txt", "w");



for(i=0;i<5;i++){



          fprintf(faturamento,"o valor da manicure %d eh %d \n", i+1, (man[i]*30/100));





}

  return 0;

}
