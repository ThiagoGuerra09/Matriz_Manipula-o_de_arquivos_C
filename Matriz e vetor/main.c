#include <stdio.h>

#include <stdlib.h>

# define TAM 2

int main()

{

    int  i, soma=0, m, j, cont=0, media, velho=0, fem=0, men=0, woman=0;
    float total=0;

    int matrix[5][3], vetor[5], sexo[5], alt[5], cor[5], idade[5];





for(i=0;i<2;i++){



printf("Digite o sexo sendo 1-Masculino e 2-Feminino\n");

scanf("%d", &sexo[i]);


printf("Digite sua altura em cm\n");

scanf("%d", &alt[i]);

printf("Digite a cor dos seus olhos sendo 1-azul 2-verde 3-castanho\n");

scanf("%d", &cor[i]);

printf("Digite sua idade\n");

scanf("%d", &idade[i]);


if(alt[i]>160 && cor[i]==3){

    cont++;
    soma+=idade[i];


}
if(idade[i]>velho){
        velho=idade[i];

}
if(sexo[i]==2){
    if(idade[i]>=20 && idade<=45){
        fem++;
    }
}
if(alt[i]<170){
        if (cor[i]=2){
    fem++;
}
}
if(sexo[i]==1){
    men++;
}
if(sexo[i]==2){
    woman++;
}
}
total=men+woman;
if(cont!=0){
    media=soma/cont;
}
else{
    media=0;
}
printf("a media de idade de pessoas com altura maior que 1.60 e de olhos castanhos eh %d\n", media);
printf("o mais velho eh %d\n", velho);
printf("a quantidade de indivíduos do sexo feminino cuja idade esteja entre 20 e 45 anos (inclusive) ou que tenham olhos verdes e altura inferior a 1,70 m eh %d\n", fem);
printf("a porcentagem de homens eh %f\n", men/total*100);
  return 0;

}
