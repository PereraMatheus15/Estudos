#include<stdlib.h>
#include<stdio.h>

int main(){

char nome[20];
int matricula;
float nota1,nota2,nota3,nota4,media;


printf ("digite o nome do aluno:");
scanf("%s",&nome);

printf ("digite a matricula do aluno:");
scanf("%d",&matricula);

printf ("digite a nota do primeiro bimestre:");
scanf("%f",&nota1);

printf ("digite a nota do segundo bimestre:");
scanf("%f",&nota2);

printf ("digite a nota do terceiro bimestre:");
scanf("%f",&nota3);

printf ("digite a nota do quarto bimestre:");
scanf("%f",&nota4);

media = (nota1+nota2+nota3+nota4) /4;

system("cls");

if (media >= 7){
    printf("\nPARABENS VOCE FOI APROVADO!! \n\n");

    }
    else if ( media <=6){

    printf("\nSE ESFORCE DA PROXIMA VEZ\n VOCE FOI REPROVADO!!");
    }


    }
