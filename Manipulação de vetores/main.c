#include <stdio.h>

#include <stdlib.h>



int main()

{

    int pos=0, neg=0, vet[6],i;
    int n=0;

printf("quantos numeros você quer analisar?\n");
scanf("%d", &n);

    for(i=0; i<n; i++){

        printf("Digite um numero: ");

        scanf("%d",&vet[i]);

    }



    printf("\nValores Positivos: ");

    for(i=0; i<n; i++){

        if(vet[i]>= 0){

                 pos++;

                 printf("%d | ", vet[i]);

            }

    }

    printf("\nQuantidade de Positivos: %d",pos);

    printf("\nValores Negativos: ");

    for(i=0; i<6; i++){

        if(vet[i]< 0){

                 neg++;

                 printf("%d | ", vet[i]);

            }

    }

    printf("\nQuantidade de negtivos: %d",neg);



    return 0;

}
